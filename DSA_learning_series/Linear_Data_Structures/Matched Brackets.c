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
void max_depth(long long int n,int* s,long long int* ans);


int main()
{
    long long int i,n,j;
    long long int* ans=(long long int *)malloc(4*sizeof(long long int));
    scanf("%lld",&n);
    int* seq=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&seq[i]);
    }
    max_depth(n,seq,ans);
    for(i=0;i<4;i++)
    {
        printf("%lld ",ans[i]);
    }
    free(seq);
    return 0;
}

void max_depth(long long int n,int* s,long long int*ans)
{
    long long int prefix=-1,sum=0,max=0;
    int flag=0;
    long long int i,index=0,counter=0,max_counter=0;
    for(i=0;i<n;i++)
    {
        if(s[i]==1)
            sum++;
        if(s[i]==2)
            sum--;
        if(sum>max)
        {
            prefix=i;
            max=sum;
        }
        if(sum==1)
            flag=1;
        if(sum==0)
        {
            flag=0;
            if(counter>max_counter)
            {
                max_counter=counter;
                index=i;
            }
            counter=0;
        }
        if(flag)
        {
            counter++;
        }
    }
    ans[0]=max;
    ans[1]=prefix+1;
    ans[2]=max_counter+1;
    ans[3]=index-max_counter+1;
    
}




























