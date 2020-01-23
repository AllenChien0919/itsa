https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?a=1281

#include <stdio.h>

int main()
{
    int month,day;
    scanf("%d%d",&month,&day);
    if(month==1)
    {
        if(day<=20)
            printf("Capricorn\n");
        else
            printf("Aquarius\n");
    }
    else if(month==2)
    {
        if(day<=18)
            printf("Aquarius\n");
        else
            printf("Pisces\n");
    }
    else if(month==3)
    {
        if(day<=20)
            printf("Pisces\n");
        else
            printf("Aries\n");
    }
    else if(month==4)
    {
        if(day<=20)
            printf("Aries\n");
        else
            printf("Taurus\n");
    }
    else if(month==5)
    {
        if(day<=21)
            printf("Taurus\n");
        else
            printf("Gemini\n");
    }
    else if(month==6)
    {
        if(day<=21)
            printf("Gemini\n");
        else
            printf("Cancer\n");
    }
    else if(month==7)
    {
        if(day<=22)
            printf("Cancer\n");
        else
            printf("Leo\n");
    }
    else if(month==8)
    {
        if(day<=23)
            printf("Leo\n");
        else
            printf("Virgo\n");
    }
    else if(month==9)
    {
        if(day<=23)
            printf("Virgo\n");
        else
            printf("Libra\n");
    }
    else if(month==10)
    {
        if(day<=22)
            printf("Libra\n");
        else
            printf("Scorpio\n");
    }
    else if(month==11)
    {
        if(day<=21)
            printf("Scorpio\n");
        else
            printf("Sagittarius\n");
    }
    else if(month==12)
    {
        if(day<=21)
            printf("Sagittarius\n");
        else
            printf("Capricorn\n");
    }
    return 0;

}
