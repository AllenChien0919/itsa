//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=20727

#include <stdio.h>

int main()
{
    int det=0;
    char c;
    char A[8][8];
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            scanf("%c",&A[i][j]);
            scanf("%c",&c);
        }
        scanf("%c",&c);
    }
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            det=0;
            if(i==7)
            {
                if(j==7)
                {
                    if(A[i-1][j]!=A[i][j] && A[i][j-1]!=A[i][j] && A[i-1][j-1]!=A[i][j])
                        det=1;
                }
                else if(j==0)
                {
                    if(A[i-1][j]!=A[i][j] && A[i][j+1]!=A[i][j] && A[i-1][j+1]!=A[i][j])
                        det=1;
                }
                else
                {
                    if(A[i-1][j]!=A[i][j] && A[i][j+1]!=A[i][j] && A[i][j-1]!=A[i][j] && A[i-1][j+1]!=A[i][j] && A[i-1][j-1]!=A[i][j] )
                        det=1;
                }
            }
            else if(i==0)
            {
                if(j==7)
                {
                    if(A[i+1][j]!=A[i][j] && A[i][j-1]!=A[i][j] && A[i+1][j-1]!=A[i][j])
                        det=1;
                }
                else if(j==0)
                {
                    if(A[i+1][j]!=A[i][j] && A[i][j+1]!=A[i][j] && A[i+1][j+1]!=A[i][j])
                        det=1;
                }
                else
                {
                    if(A[i+1][j]!=A[i][j] && A[i][j-1]!=A[i][j] && A[i][j+1]!=A[i][j] && A[i+1][j-1]!=A[i][j] && A[i+1][j+1]!=A[i][j])
                        det=1;
                }
            }
            else
            {
                if(j==7)
                {
                    if(A[i-1][j]!=A[i][j] && A[i+1][j]!=A[i][j] && A[i][j-1]!=A[i][j] && A[i-1][j-1]!=A[i][j] && A[i+1][j-1]!=A[i][j])
                        det=1;
                }
                else if(j==0)
                {
                    if(A[i-1][j]!=A[i][j] && A[i+1][j]!=A[i][j] && A[i][j+1]!=A[i][j] && A[i+1][j+1]!=A[i][j] && A[i-1][j+1]!=A[i][j])
                        det=1;
                }
                else
                {
                    if(A[i-1][j]!=A[i][j] && A[i+1][j]!=A[i][j] && A[i][j+1]!=A[i][j] && A[i][j-1]!=A[i][j] && A[i-1][j-1]!=A[i][j] && A[i+1][j-1]!=A[i][j] && A[i-1][j+1]!=A[i][j] && A[i+1][j+1]!=A[i][j])
                        det=1;
                }
            }
            if(det==0)
            {
                printf("(%d,%d)\n",i,j);
            }
            det=0;
        }
    }
}
