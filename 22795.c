//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=22795

#include <stdio.h>

int main()
{
    char save[3][3];
    char c;
    int det=-1;//0=O 1=X
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%c%c",&save[i][j],&c);
        }
        //scanf("%c",&c);
    }
    for(int i=0;i<3;i++)
    {
        if(save[i][0]==save[i][1] && save[i][2]==save[i][1])
        {
            if(save[i][0]=='O')
            {
                det=0;
                break;
            }
            else if(save[i][0]=='X')
            {
                det=1;
                break;
            }
        }
        if(save[0][i]==save[1][i] && save[1][i]==save[2][i])
        {
            if(save[0][i]=='O')
            {
                det=0;
                break;
            }
            else if(save[0][i]=='X')
            {
                det=1;
                break;
            }
        }
    }
    if(det==-1)
    {
        if(save[0][0]==save[1][1] && save[1][1]==save[2][2])
        {
            if(save[0][0]=='O')
            {
                det=0;
            }
            else if(save[0][0]=='X')
            {
                det=1;
            }
        }
        if(save[2][0]==save[1][1] && save[1][1]==save[0][2])
        {
            if(save[2][0]=='O')
            {
                det=0;
            }
            else if(save[2][0]=='X')
            {
                det=1;
            }
        }
    }
    if(det==-1)
    {
        printf("1\n");
    }
    else if(det==0)
    {
        printf("O\n");
    }
    else if(det==1)
    {
        printf("X\n");
    }
    return 0;
}
