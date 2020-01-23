//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=29263


#include <stdio.h>

int main()
{
    int input,max;
    int year[11]={0};
    while(scanf("%d",&input)==1)
    {
        for(int i=1;i<=10;i++)
        {
            if(input<i*10)
            {
                year[i]++;
                break;
            }
        }
    }
    max=1;
    for(int i=2;i<=10;i++)
    {
        if(year[i]>year[max])
        {
            max=i;
        }
    }
    printf("%d-%d\n",max*10-10,max*10-1);
    return 0;

}
