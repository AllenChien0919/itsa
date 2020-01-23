//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=3678
#include <stdio.h>

int main()
{
    int hour,second;
    scanf("%d%d",&hour,&second);
    if(hour==23 || hour==0)
        printf("rat\n");
    else if(hour==1 || hour==2)
        printf("ox\n");
    else if(hour==3 || hour==4)
        printf("tiger\n");
    else if(hour==5 || hour==6)
        printf("rabbit\n");
    else if(hour==7 || hour==8)
        printf("dragon\n");
    else if(hour==9 || hour==10)
        printf("snake\n");
    else if(hour==11 || hour==12)
        printf("horse\n");
    else if(hour==13 || hour==14)
        printf("goat\n");
    else if(hour==15 || hour==16)
        printf("monkey\n");
    else if(hour==17 || hour==18)
        printf("rooster\n");
    else if(hour==19 || hour==20)
        printf("dog\n");
    else if(hour==21 || hour==22)
        printf("pig\n");
    return 0;
}
