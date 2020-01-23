//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=1289
#include <stdio.h>


int main()
{
    int i;
    int save[6];
    for(i=0;i<6;i++)
    {
        scanf("%d",&save[i]);
    }
    printf("%d",save[5]);
    for(i=4;i>=0;i--)
    {
        printf(" %d",save[i]);
    }
    printf("\n");
    return 0;
}
