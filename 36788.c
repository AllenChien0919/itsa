//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=36788

#include <stdio.h>

int main()
{
    int n,ans,input;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&input);
        printf("%d ",input);
        if(input<0)
        {
            input=input+241;
        }
        ans=input%12;
        if(ans==1)
            printf("rat\n");
        else if(ans==2)
            printf("ox\n");
        else if(ans==3)
            printf("tiger\n");
        else if(ans==4)
            printf("rabbit\n");
        else if(ans==5)
            printf("dragon\n");
        else if(ans==6)
            printf("snake\n");
        else if(ans==7)
            printf("horse\n");
        else if(ans==8)
            printf("sheep\n");
        else if(ans==9)
            printf("monkey\n");
        else if(ans==10)
            printf("rooster\n");
        else if(ans==11)
            printf("dog\n");
        else if(ans==0)
            printf("pig\n");

    }
}
