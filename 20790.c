//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=20790
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/result.php?a=10543
#include <stdio.h>

int main()
{
    int bread,test,ans;
    int start,end;
    scanf("%d%d",&bread,&test);
    int A[bread];
    for(int i=1;i<=bread;i++)
    {
        scanf("%d",&A[i]);
    }
    for(int i=0;i<test;i++)
    {
        ans=0;
        scanf("%d%d",&start,&end);
        for(int j=start;j<=end;j++)
        {
            ans=ans+A[j];
        }
        printf("%d\n",ans);
    }
}
