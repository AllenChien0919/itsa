//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=3671
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/result.php?a=1671

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char zero='0';
    char s[2];
    char c,d;
    int ans=0;
    for(int i=0;i<5;i++)
    {
        scanf("%c",&c);
        if(c=='A')
        {
            ans=ans+14;
        }
        else if(c=='J')
        {
            ans=ans+11;
        }
        else if(c=='Q')
        {
            ans=ans+12;
        }
        else if(c=='K')
        {
            ans=ans+13;
        }
        else if(c=='1')
        {
            scanf("%c",&c);
            ans=ans+10;
        }
        else
        {
            ans=ans+(int)c-(int)zero;
        }
        scanf("%c",&c);
    }
    printf("%d\n",ans);
    return 0;
}
