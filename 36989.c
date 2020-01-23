//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=36989

#include <stdio.h>

int main()
{
    int n;
    int input;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%c",&input);
        scanf("%c",&input);
        scanf("%c",&input);
        printf("%c\n",(char)input+2);

    }
}
