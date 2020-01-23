//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=3684

#include <stdio.h>

int main()
{
    int year,ans1,ans2;
    scanf("%d",&year);
    ans1=year%12;
    ans2=(ans1+6)%12;
    if(ans1==4)
        printf("rat");
    else if(ans1==5)
        printf("ox");
    else if(ans1==6)
        printf("tiger");
    else if(ans1==7)
        printf("rabbit");
    else if(ans1==8)
        printf("dragon");
    else if(ans1==9)
        printf("snake");
    else if(ans1==10)
        printf("horse");
    else if(ans1==11)
        printf("goat");
    else if(ans1==0)
        printf("monkey");
    else if(ans1==1)
        printf("rooster");
    else if(ans1==2)
        printf("dog");
    else if(ans1==3)
        printf("pig");
    printf("\n");
    if(ans2==4)
        printf("rat");
    else if(ans2==5)
        printf("ox");
    else if(ans2==6)
        printf("tiger");
    else if(ans2==7)
        printf("rabbit");
    else if(ans2==8)
        printf("dragon");
    else if(ans2==9)
        printf("snake");
    else if(ans2==10)
        printf("horse");
    else if(ans2==11)
        printf("goat");
    else if(ans2==0)
        printf("monkey");
    else if(ans2==1)
        printf("rooster");
    else if(ans2==2)
        printf("dog");
    else if(ans2==3)
        printf("pig");
    printf("\n");
    return 0;

}
