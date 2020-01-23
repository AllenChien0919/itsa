//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=36785

#include <stdio.h>

int main()
{
    int n,input;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&input);
        printf("%d ",input);
        if(input==1)
        {
            printf("Mercury\n");
        }
        else if(input==2)
        {
            printf("Venus\n");
        }
        else if(input==3)
        {
            printf("Earth\n");
        }
        else if(input==4)
        {
            printf("Mars\n");
        }
        else if(input==5)
        {
            printf("Juputer\n");
        }
        else if(input==6)
        {
            printf("Saturn\n");
        }
        else if(input==7)
        {
            printf("Uranus\n");
        }
        else if(input==8)
        {
            printf("Neptunus\n");
        }
        else if(input==9)
        {
            printf("Pluto\n");
        }

    }
    return 0;
}
