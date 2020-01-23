//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=3523

#include <stdio.h>

int main()
{
    int i,j,k,l,max=0,temp=0,mem=-1;
    int save[4];
    scanf("%d",&i);
    int input[i];
    for(j=0;j<i;j++)
    {
        scanf("%d",&input[j]);
    }
    for(j=0;j<i;j++)
    {
        max=0;
        if((input[j]/1000)>=10 ||(input[j]/1000)<=0)
            printf("Failure Input\n");
        else
        {
            save[3]=input[j]%10;
            save[2]=(input[j]%100)/10;
            save[1]=(input[j]%1000)/100;
            save[0]=input[j]/1000;
            //printf("%d %d %d %d\n",save[0],save[1],save[2],save[3]);
            for(k=0;k<4;k++)
            {
                temp=0;
                for(l=0;l<4;l++)
                {
                    if(save[l]==save[k])
                    {
                        temp++;
                    }
                }
                if(temp==2 && max==2 && save[k]!=mem)
                {
                    max=1;
                    break;
                }
                if(temp>max)
                {
                    max=temp;
                    mem=save[k];
                }
            }
        }
        if(max==2)
        {
            printf("Yes\n");
        }
        else if(max!=0)
        {
            printf("No\n");
        }
    }
    return 0;
}
