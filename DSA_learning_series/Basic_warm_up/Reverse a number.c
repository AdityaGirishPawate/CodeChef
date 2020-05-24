
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int rev(int number)
{
    int i;
    int digits=1;
    int num=number;
    int temp=0;
    int reverse=0;
    
    for(i=0;num/10!=0;i++)
    {
        digits++;
        num=num/10;
    }
    num=number;
    for(i=0;i<digits;i++)
    {
        temp=num%10;
        reverse+=temp*pow(10,digits-i-1);
        num=num/10;
    }

    return reverse;
}


int main()
{
    int i,t;
    scanf("%d",&t);
    int* a=(int*)malloc(t*sizeof(int));
    int* b=(int*)malloc(t*sizeof(int));
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<t;i++)
    {
        b[i]=rev(a[i]);
        printf("%d\n",b[i]);
    }
}
