//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=15843
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/result.php?a=7899
#include <stdio.h>

int main()
{
    int A[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("%d\n",A[0][0]*A[1][1]*A[2][2]+A[1][0]*A[2][1]*A[0][2]+A[2][0]*A[0][1]*A[1][2]
           -A[0][2]*A[1][1]*A[2][0]-A[0][1]*A[1][0]*A[2][2]-A[0][0]*A[1][2]*A[2][1]);
    return 0;
}
