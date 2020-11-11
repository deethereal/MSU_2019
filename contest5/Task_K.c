#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
int main()
{
    int n,*A,count;
    scanf("%d",&n);
    A=(int*)malloc(n*sizeof(int));
    if (A!= NULL)
    {
        for (int i=0;i<n;i++)
            scanf("%d",&A[i]);
        count=1;
        for (int i=0;i<n-1;i++){
            if (A[i]<A[i+1])
                count++;
        }
        printf("%d",count);
    }
    free(A);
    return(0);
}

