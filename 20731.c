//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=20731
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/new_submit.php?a=10511
//the ans is uncorrect
#include <stdio.h>

int main()
{
    int month,ans=0;
    int last_last_month=1,last_month=1;
    scanf("%d",&month);
    if(month==1 || month==2)
    {
        printf("1\n");
        return 0;
    }
    else
    {
        for(int i=3;i<=month;i++)
        {
            ans=last_last_month+last_month;
            last_last_month=last_month;
            last_month=ans;
        }
        printf("%d\n",ans);
        return 0;
    }
}
