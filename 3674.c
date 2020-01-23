//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=3674

#include<stdio.h>

int main()
{
    int j,k;
    int input[6];
    for(j=0;j<6;j++)
    {
        scanf("%d",&input[j]);
    }
    for(j=0;j<5;j++)
    {
        printf("%03d",input[j]*input[0]);
        for(k=1;k<6;k++)
        {
            printf(" %03d",input[j]*input[k]);
        }
        printf("\n");
    }
        printf("%03d",input[5]*input[0]);
        for(k=1;k<6;k++)
        {
            printf(" %03d",input[j]*input[k]);
        }
        printf("\n");
    return 0;
}
