//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=24145
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/result.php?a=12198
#include <stdio.h>

int main()
{
    float max,min,compare;
    scanf("%f",&max);
    min=max;
    for(int i=0;i<9;i++)
    {
        scanf("%f",&compare);
        if(compare>max)
        {
            max=compare;
        }
        if(compare<min)
        {
            min=compare;
        }
    }
    printf("maximum:%.2f\nminimum:%.2f\n",max,min);
    return 0;
}
