#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
int main()
{
    int n,*A,count=0;
    scanf("%d",&n);
    A=(int*)malloc(n*sizeof(int));
    if (A!= NULL){
    for (int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
            
    }
    for (int i=0;i<n;i++)
        if (i!=0 && i!=n-1)
        {
            if ((A[i]>A[i-1]) && (A[i]>A[i+1]))
                count++;
        }
        printf("%d",count);
    }
    free(A);
    
    return(0);
}

