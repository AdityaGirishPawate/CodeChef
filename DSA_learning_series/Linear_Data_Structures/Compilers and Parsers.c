/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
#include <math.h>
#include<string.h>

#define MAX_INT 1000000
long long int prefix(long long int n,char* s);


int main()
{
    long long int i,n,t,j;
    scanf("%lld",&t);
    long long int* pref=(long long int *)malloc(t*sizeof(long long int));
    for(i=0;i<t;i++)
    {
        char* str=(char*)malloc((MAX_INT+1)*sizeof(char));
        scanf("%s",str);
        n=strlen(str);
        //printf("%d",s[j]);
        pref[i]=prefix(n,str);
        free(str);
    }
    for(i=0;i<t;i++)
    {
        printf("%lld\n",pref[i]+1);
    }
    return 0;
}

long long int prefix(long long int n,char* s)
{
    long long int prefix=-1,sum=0;
    long long int i;
    for(i=0;i<n;i++)
    {
        if(s[i]=='<')
            sum++;
        if(s[i]=='>')
            sum--;
        if(sum==0)
            prefix=i;
        if(sum<0)
            break;
    }
    
    return prefix;
}



























