//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=7066

#include <stdio.h>

int main()
{
    char c;
    int max=0,ans=0;
    int A[3][3];
    int record[2];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&A[i][j]);
            scanf("%c",&c);
        }
    }
    for(int k=0;k<3;k++)
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                if(A[i][j]>max)
                {
                    max=A[i][j];
                    record[0]=i;
                    record[1]=j;
                }
            }
        }
        ans=ans+max;
        max=0;
        A[record[0]][record[1]]=-1;
    }
    printf("%d\n",ans);
    return 0;
}
