#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    int* a=(int*)malloc(n*sizeof(int));
    
    for(i=0;a[i]!=42;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d",a[i]);
}

