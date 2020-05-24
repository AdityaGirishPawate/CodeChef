/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

long long int maxdigit(long long int a[],int n);
void radixsort(long long int a[],int n);
long long int revenue(long long int* numbers,int n);
void countsort(long long int a[],int n,long long int ex);


int main()
{
    int i,n;
    scanf("%d",&n);
    long long int* a=(long long int*)malloc(n*sizeof(long long int));
    
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    radixsort(a,n);
    printf("%lld",revenue(a,n));
}

void radixsort(long long int a[],int n)
{
    long long int ex;
    long long int i;
    ex = maxdigit(a,n);

    for(i=0;i<ex;i++)
        countsort(a,n,i);
}

long long int revenue(long long int* numbers,int n)
{
    long long int max=-1;
    int i;
    for(i=0;i<n;i++)
    {
        if(numbers[i]*(n-i)>max)
            max=numbers[i]*(n-i);
    }
    return max;
    
}

void countsort(long long int a[],int n,long long int ex)
{
    int i;
    int b[10]={0};
    int *c=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        b[((int)(a[i]/(pow(10,ex))))%10]++;

    for(i=0;i<9;i++)
        b[i+1]+=b[i];

    for(i=n-1;i>=0;i--)
    {
        c[b[((int)(a[i]/(pow(10,ex))))%10]-1]=a[i];
        b[((int)(a[i]/(pow(10,ex))))%10]--;
    }
;
    for(i=0;i<n;i++)
        a[i]=c[i];
}

long long int maxdigit(long long int a[],int n)
{
    int i,m,j;
    m=1;
    for(i=0;i<n;i++)
    {
        j=1;
        while((a[i]/(int)(pow(10,j))!=0))
            j++;
        if(j>m)
            m=j;
    }
    return m;
}

