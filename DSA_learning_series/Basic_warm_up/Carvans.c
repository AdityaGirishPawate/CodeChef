/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

long long int calc(long long int n, long long int* a);

int main()
{
    int i,j,t,n;
    scanf("%d",&t);
    long long int* a=(long long int*)malloc(t*sizeof(long long int));
    long long int** b=(long long int**)malloc(t*sizeof(long long int*));
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        b[i]=(long long int *)malloc((n)*sizeof(long long int));
        for(j=0;j<n;j++)
        {
            scanf("%lld",&b[i][j]);
        }
        a[i]=calc(n,b[i]);
        
    }
    for(i=0;i<t;i++)
    {
        printf("%lld\n",a[i]);
    }

    return 0;
}

long long int calc(long long int n, long long int* a)
{
    long long int i,max=1;
    long long int counter=a[0];
    for (i=1;i<n;i++)
    {
        if(a[i]<counter)
        {
            counter=a[i];
            max++;
        }
    }
    return max;
}
