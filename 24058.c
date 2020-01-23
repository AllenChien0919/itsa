//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=24058
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/result.php?a=12167
#include <stdio.h>

int main()
{
    int m,n;
    int ans=0;
    scanf("%d%d",&m,&n);
    for(int i=1;i<=m;i++)
    {
        if((i*i)%n==0)
        {
            ans=ans+i*i;
        }
    }
    printf("%d\n",ans);
    return 0;
}
