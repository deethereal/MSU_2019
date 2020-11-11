#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
int main()
{
    int n,*A,f,t;
    scanf("%d",&n);
    A=(int*)malloc(n*sizeof(int));
    if (A!= NULL){
    for (int i=0;i<n;i++)
        scanf("%d",&A[i]);
    if (n%2==0)
        f=n;
    else
        f=n-1;
    for (int i=0;i<f;i=i+2)
    {
        t=A[i];
        A[i]=A[i+1];
        A[i+1]=t;
    }
    for (int i=0;i<n;i++)
        printf("%d ",A[i]);
    }
    free(A);

    return(0);
}

