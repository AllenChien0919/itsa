//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=2162

#include <stdio.h>

int main()
{
    int i,j,k,ans=1;
    scanf("%d",&i);
    int save[i];
    for(j=0;j<i;j++)
    {
        scanf("%d",&save[j]);
        for(k=0;k<j;k++)
        {
            if(save[j]==save[k])
            {
                ans=0;
                break;
            }
        }
        if(ans==0)
            break;
    }
    printf("%d\n",ans);
    return 0;
}
