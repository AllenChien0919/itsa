//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=3702

#include <stdio.h>

int main()
{
    int i;
    scanf("%d",&i);
    int input[i][2];
    for(int j=0;j<i;j++)
    {
        scanf("%d%d",&input[j][0],&input[j][1]);
    }
    for(int j=0;j<i;j++)
    {
        if(input[j][0]==123)
        {
            if(input[j][1]==456)
                printf("9000\n");
            else
                printf("error\n");
        }
        else if(input[j][0]==456)
        {
            if(input[j][1]==789)
                printf("5000\n");
            else
                printf("error\n");
        }
        else if(input[j][0]==789)
        {
            if(input[j][1]==888)
                printf("6000\n");
            else
                printf("error\n");
        }
        else if(input[j][0]==336)
        {
            if(input[j][1]==558)
                printf("10000\n");
            else
                printf("error\n");
        }
        else if(input[j][0]==775)
        {
            if(input[j][1]==666)
                printf("12000\n");
            else
                printf("error\n");
        }
        else if(input[j][0]==566)
        {
            if(input[j][1]==221)
                printf("7000\n");
            else
                printf("error\n");
        }
        else
            printf("error\n");
    }
    return 0;
}
