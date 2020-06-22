#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct point
{
    int x,y;
}point;

long double dist(point a,point b)
{
    double dis;
    dis=sqrt(pow((a.x)-(b.x),2)+pow((a.y)-(b.y),2));
    return dis;
}

long double calmin(point start,point N[],int n,point M[],int m,point K[],int k)
{
    int a,b,c;
    long double min=99999.0;
    for(a=0;a<n;a++)
    {
        for(b=0;b<m;b++)
        {
            for(c=0;c<k;c++)
            {
                if((dist(start,N[a])+dist(N[a],M[b])+dist(M[b],K[c]))<min)
                    min=(dist(start,N[a])+dist(N[a],M[b])+dist(M[b],K[c]));
                if((dist(start,M[b])+dist(M[b],N[a])+dist(N[a],K[c]))<min)
                    min=(dist(start,M[b])+dist(M[b],N[a])+dist(N[a],K[c]));
            }
        }
    }
    return min;
}

int main()
{
    int i,t,n,m,k;
    int a;
    scanf("%d",&t);
    long double* ans =(long double*)malloc(t*sizeof(long double));
    
    for(i=0;i<t;i++)
    {
        point start;
        scanf("%d%d",&start.x,&start.y);
        scanf("%d%d%d",&n,&m,&k);
        point* N=(point*)malloc(n*sizeof(point));
        point* M=(point*)malloc(m*sizeof(point));
        point* K=(point*)malloc(k*sizeof(point));
        for(a=0;a<n;a++)
            scanf("%d%d",&N[a].x,&N[a].y);
        for(a=0;a<m;a++)
            scanf("%d%d",&M[a].x,&M[a].y);
        for(a=0;a<k;a++)
            scanf("%d%d",&K[a].x,&K[a].y);
        
        ans[i]=calmin(start,N,n,M,m,K,k);
        free(N);
        free(M);
        free(K);
    }
    for(i=0;i<t;i++)
        printf("%0.10Lf\n",ans[i]);
    return 0;
}







