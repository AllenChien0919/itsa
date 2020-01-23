//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=3535

#include <stdio.h>

int main()
{
    int m1,m2,n1,n2;
    scanf("%d%d",&m1,&n1);
    int matrix1[m1][n1];
    for(int i=0;i<m1;i++)
    {
        for(int j=0;j<n1;j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
    }
    scanf("%d%d",&m2,&n2);
    int matrix2[m2][n2];
    for(int i=0;i<m2;i++)
    {
        for(int j=0;j<n2;j++)
        {
            scanf("%d",&matrix2[i][j]);
        }
    }
    for(int i=0;i<m1;i++)
    {
        printf("%d",matrix1[i][0]+matrix2[i][0]);
        for(int j=1;j<n1;j++)
        {
            printf(" %d",matrix1[i][j]+matrix2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
