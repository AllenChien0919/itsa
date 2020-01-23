//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=22801

#include <stdio.h>

int main()
{
    int n;
    int three=3,four=4;
    int the_k=0,plus=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        if(three<four)
        {
            plus=plus+three;
            if(i==n-1)
            {
                the_k=three;
            }
            three=three*3;
        }
        else
        {
            plus=plus+four;
            if(i==n-1)
            {
                the_k=four;
            }
            four=four*4;
        }
    }
    printf("%d,%d\n",the_k,plus);
    return 0;
}
