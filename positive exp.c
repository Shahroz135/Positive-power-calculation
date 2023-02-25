/*Program to calculate positive power of a number*/
#include"stdio.h"
#include"conio.h"
#include"math.h"
void main()
{
    int base,power,result;
    float res;
    printf("Enter number for base=");
    scanf("%d",&base);
    printf("Enter number for power=");
    scanf("%d",&power);
    result=1;
    if(power>0)
    {
        while(power!=0)
        {
            result*=base;
            --power;
        }
        printf("Answer =%d",result);
    }
}