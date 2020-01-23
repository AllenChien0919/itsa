//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=29888

#include <stdio.h>

int main()
{
    char input[6];
    char zero='0';
    int num=0,min;
    int save[3];
    int delete1,delete2;
    for(int i=1;i<6;i++)
    {
        scanf("%c",&input[i]);
    }
    scanf("%d%d",&delete1,&delete2);
    for(int i=1;i<6;i++)
    {
        if(i!=delete1 && i!=delete2)
        {
            save[num]=(int)input[i]-(int)zero;
            num++;
        }
    }
    for(int i=0;i<3;i++)
    {
        min=0;
        for(int j=1;j<3;j++)
        {
            if(save[j]<save[min])
            {
                min=j;
            }
        }
        printf("%d",save[min]);
        save[min]=10;
    }
    printf("\n");
    return 0;
}
