//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=1291

#include <stdio.h>

int main()
{
    int save[6];
    int ans=0,temp;
    for(int i=0;i<6;i++)
    {
        scanf("%d",&save[i]);
        temp=save[i]*save[i];
        temp=temp*save[i];
        ans=ans+temp;
    }
    printf("%d\n",ans);
    return 0;
}
