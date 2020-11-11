#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
int main()
{
    int n,*A,l;
    scanf("%d",&n);
    A=(int*)malloc(n*sizeof(int));
    if (A!= NULL){
    for (int i=0;i<n;i++)
        scanf("%d",&A[i]);
    l=A[n-1];
    for (int i=n-1;i!=0;i--)
    {
        A[i]=A[i-1];
    }
        A[0]=l;
    for (int i=0;i<n;i++)
        printf("%d ",A[i]);
    }
    free(A);

    return(0);
}

