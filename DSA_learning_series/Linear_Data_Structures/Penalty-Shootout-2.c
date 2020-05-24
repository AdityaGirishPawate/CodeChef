/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
#include <math.h>
#include<string.h>

long long int penalty(int n,int* s);

int main()
{
    long long int i,n,t,j;
    scanf("%lld",&t);
    long long int* pe=(long long int *)malloc(t*sizeof(long long int));
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        char* str=(char*)malloc((2*n+1)*sizeof(char));
        int* s=(int*)malloc((2*n)*sizeof(int));
        scanf("%s",str);
        for(j=0;j<2*n;j++)
        {
            if(str[j]=='0')
                s[j]=0;
            if(str[j]=='1')
                s[j]=1;
        }
        //printf("%d",s[j]);
        pe[i]=penalty(n,s);
        free(s);
        free(str);
    }
    for(i=0;i<t;i++)
    {
        printf("%lld\n",pe[i]+1);
    }
}

long long int penalty(int n,int* s)
{
    long long int a=0,b=0;
    long long int i;
    for(i=0;i<2*n;i++)
    {
        if((i%2==0)&&(s[i]==1))
            a++;
        if((i%2==1)&&(s[i]==1))
            b++;
        if(a>(b+(2*n-i)/2))
            break;
        if(b>(a+(2*n-i-1)/2))
            break;
        if(i==2*n-1)
            break;
    }
    
    return i;
}


























