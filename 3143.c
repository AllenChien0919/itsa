//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=3143

int main()
{
    int i,j,k,temp,num;
    scanf("%d",&i);

    int save[i];
    for(j=0;j<i;j++)
    {
        scanf("%d",&save[j]);
    }
    for(j=0;j<i;j++)
    {
        num=-1;
        temp=101;
        for(k=0;k<i;k++)
        {
            if(save[k]<temp)
            {
                temp=save[k];
                num=k;
            }
        }
        printf("%d\n",temp);
        save[num]=102;
    }
    return 0;
}
