/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
#include <math.h>
#include<string.h>

long long int max_token1(long long int n,long long int* s);
long long int max_token2(long long int n,long long int* s);

int main()
{
    long long int i,n,t,j;
    scanf("%lld",&t);
    long long int* max=(long long int *)malloc(t*sizeof(long long int));
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        long long int* s=(long long int*)malloc(n*sizeof(long long int ));
        for(j=0;j<n;j++)
        {
            scanf("%lld",&s[j]);
        }
        //printf("%d",s[j]);
        max[i]=max_token2(n,s);
        free(s);
    }
    for(i=0;i<t;i++)
    {
        printf("%lld\n",max[i]);
    }
    return 0;
}

long long int max_token1(long long int n,long long int* s)
{
    long long int max=0;
    long long int i;
    while(s[0]!=0)
    {
        for(i=0;i<n&&s[i]!=0;i++)
        {
            max++;
            //printf("%lld%lld\n",max,s[i]);
            s[i]--;
        }
        
    }
    
    return max;
}
long long int max_token2(long long int n,long long int* s)
{
    long long int max=0,counter=s[0];
    long long int i;
    if(counter==0)
        return 0;
    for(i=0;i<n;i++)
    {
        if(s[i]<=counter)
        {
            counter=s[i];
            max+=counter;
        }
        else
            max+=counter;
    }
    
    return max;
}


























