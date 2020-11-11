#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
int main()
{
    int n,*A;
    scanf("%d",&n);
    A=(int*)malloc(n*sizeof(int));
    if (A!= NULL){
    for (int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
        if (A[i]%2==0)
            printf("%d ",A[i]);
    }
    }
    
    return(0);
    free(A);
}

