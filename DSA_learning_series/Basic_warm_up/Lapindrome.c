/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void lipin(char* name)
{
    int i,j;
    int a[300]={0};
    int b[300]={0};
    
    int n=strlen(name);
    
    
    
    for(i=0,j=(n+1)/2;i<n/2,j<n;i++,j++)
    {
        a[(int)name[i]]++;
        b[(int)name[j]]++;
        
    }
    
    int flag=1;
    for(i=0;i<300;i++)
    {
        if(a[i]!=b[i])
            flag=0;
    }
    if(flag)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
}


int main()
{
    int i,t;
    scanf("%d",&t);
    char** a=(char**)malloc(t*sizeof(char*));
    int* b=(int*)malloc(t*sizeof(int));
    char temp[10000];
    int l;
    for(i=0;i<t;i++)
    {
        scanf("%s",temp);
        l=strlen(temp);
        a[i]=(char*)malloc((l+1)*sizeof(char));
        strcpy(a[i],temp);
        
    }
    for(i=0;i<t;i++)
    {
        lipin(a[i]);
    }
}

