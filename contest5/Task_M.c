#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
int main()
{
    int n,*A,a,b,c,d,t;
    scanf("%d",&n);
    A=(int*)malloc(n*sizeof(int));
    if (A!= NULL)
    {
        scanf("%d%d%d%d",&a,&b,&c,&d);
        a--;
        b--;
        c--;
        d--;
        for (int i=0;i<n;i++)
            A[i]=i+1;
        int j=0;
        for (int i=a;i<a+(b-a+1)/2;i++)
        {
        
            t=A[i];
            A[i]=A[b-j];
            A[b-j]=t;
            j++;
        }
        j=0;
        for (int i=c;i<c+(d-c+1)/2;i++)
        {
            t=A[i];
            A[i]=A[d-j];
            A[d-j]=t;
            j++;
        }
        for (int i=0;i<n;i++)
            printf("%d ",A[i]);
        

    }
    free(A);
    return(0);
}

