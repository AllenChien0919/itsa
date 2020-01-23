//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=3087

#include <stdio.h>

int main()
{
    int n,min;
    scanf("%d",&n);
    int input[n];
    int ans[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&input[i]);
    }
    for(int i=0;i<n;i++)
    {
        min=0;
        for(int j=1;j<n;j++)
        {
            if(input[j]<input[min])
            {
                min=j;
            }
        }
        ans[i]=input[min];
        input[min]=210000000;
    }
    printf("%d",ans[0]);
    for(int i=1;i<n;i++)
    {
        printf(" %d",ans[i]);
    }
    printf("\n");
}
