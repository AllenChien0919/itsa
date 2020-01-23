//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=3146

#include <stdio.h>

int main()
{
    char c;
    int n;
    int save[123]={0};
    int temp;
    scanf("%d",&n);
    scanf("%c",&c);
    for(int i=0;i<n;i++)
    {
        scanf("%c",&temp);
        save[temp]++;
        scanf("%c",&c);
    }
    for(int i=0;i<123;i++)
    {
        if(save[i]!=0)
        {
            printf("%c %d\n",(char)i,save[i]);
        }
    }
    return 0;
}
