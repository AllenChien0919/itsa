//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=13627
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/result.php?a=6428

#include <stdio.h>

int main()
{
    int A,B;
    char c;
    char ans[4];
    char save[4];
    for(int i=0;i<4;i++)
    {
        scanf("%c",&ans[i]);
    }

    while(1>0)
    {
        scanf("%c",&c);
        scanf("%c",&c);
        A=0;B=0;
        scanf("%c%c%c%c",&save[0],&save[1],&save[2],&save[3]);
        if(save[0]=='0' && save[1]=='0' && save[2]=='0' && save[3]=='0')
        {
            break;
        }
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                if(save[i]==ans[j])
                {
                    if(i==j)
                    {
                        A++;
                    }
                    else
                    {
                        B++;
                    }
                }
            }
        }
        printf("%dA%dB\n",A,B);
    }
    return 0;
}
