//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=3705

#include <stdio.h>

int main()
{
    int row,column,minus=0;
    scanf("%d%d",&row,&column);
    for(int j=0;j<row;j++)
    {
        for(int k=0;k<column-1;k++)
        {
            printf("%d ",row*column-minus);
            minus++;
        }
        printf("%d",row*column-minus);
        minus++;
        printf("\n");
    }
    return 0;
}
