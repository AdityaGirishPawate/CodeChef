
#include <stdio.h>

int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,k,j,l,m,r;
        scanf("%d%d",%n,&k);
        int* a=(int*)malloc(n*sizeof(int));
        int* R=(int*)malloc(t*sizeof(int));
        for(j=0;j<n;j++)
            scanf("%d",&a[j]);
        r=0;
        for(l=0;l<n;l++)
        {
            r = a[l]%k;
            a[l]=a[l]-r;
            if(r==0)
                continue;
            if(l==n-1)
                break;
            for(m=l+1;m<n;m++)
            {
                if(a[m]%k!=0)
                {
                    a[m]+=r;
                    break;
                }
            }
            
        }
        R[i]=r;
        
    }
    for(i=0;i<t;i++)
        printf("%d\n",R[i]);
}
