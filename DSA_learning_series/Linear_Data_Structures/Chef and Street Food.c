/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
#include <math.h>

long long int max_profit(int n,int* s,int* p,int* v);

int main()
{
    int t,n,i,j;
    scanf("%d",&t);
    long long int* profit=(long long int *)malloc(t*sizeof(long long int));
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        int* s=(int*)malloc(n*sizeof(int));
        int* p=(int*)malloc(n*sizeof(int));
        int* v=(int*)malloc(n*sizeof(int));
        for(j=0;j<n;j++)
        {
            scanf("%d%d%d",&s[j],&p[j],&v[j]);
        }
        //printf("%d%d%d",s[j],p[j],v[j]);
        profit[i]=max_profit(n,s,p,v);
        free(s);
        free(p);
        free(v);
    }
    for(i=0;i<t;i++)
    {
        printf("%lld\n",profit[i]);
    }
}

long long int max_profit(int n,int* s,int* p,int* v)
{
    long long int temp,max=0,arg_max=-1;
    int i;
    long long int people;
    for(i=0;i<n;i++)
    {
        people=p[i]/(s[i]+1);
        temp=v[i]*people;
        //printf("%d\n",&temp);
        if(temp>max)
        {
            max=temp;
            arg_max=i;
        }
    }
    return max;
}


























