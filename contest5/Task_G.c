#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
int main()
{
    int n,*A,count=0,t;
    scanf("%d",&n);
    A=(int*)malloc(n*sizeof(int));
    if (A!= NULL){
        int f=n/2;
    for (int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
            
    }
        for (int i=0;i<f;i++)
        {
            t=A[i];
            A[i]=A[n-1-i];
            A[n-i-1]=t;
        }
        
    for (int i=0;i<n;i++)
        {
        printf("%d ",A[i]);
        }
    }
    free(A);
    return 0;
}
