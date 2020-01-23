//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=24324

#include <stdio.h>

int main()
{
    int n,tre,record;
    int input,det=0;
    int num=0,min=-1;
    scanf("%d%d",&n,&tre);
    int save[n][2];
    for(int i=0;i<n;i++)
    {
        det=0;
        scanf("%d",&input);
        for(int j=0;j<num;j++)
        {
            if(input==save[j][0])
            {
                det=1;
                save[j][1]++;
                break;
            }
        }
        if(det==0)
        {
            save[num][0]=input;
            save[num][1]=1;
            num++;
        }
    }
    int ans[num][2];
    for(int i=0;i<num;i++)
    {
        min=-1;
        for(int j=0;j<num;j++)
        {
            if(save[j][0]>min)
            {
                min=save[j][0];
                record=j;
            }
        }
        ans[i][0]=save[record][0];
        ans[i][1]=save[record][1];
        save[record][0]=-1;
    }
    for(int i=num-1;i>=0;i--)
    {
        if(ans[i][1]>=tre)
        printf("%d,%d\n",ans[i][0],ans[i][1]);
    }
    return 0;

}
