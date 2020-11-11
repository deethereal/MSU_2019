#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
int main()
{
    int n,*A,max;
    scanf("%d",&n);
    A=(int*)malloc(n*sizeof(int));
    if (A!= NULL)
    {
        for (int i=0;i<n;i++)
            scanf("%d",&A[i]);
        max=A[0];
        for (int i=0;i<n;i++)
        {
            if (A[i]>max)
                max=A[i];

        }
        printf("%d",max);
    }
    free(A);
    return(0);
}

