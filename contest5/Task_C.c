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
        if (A[i]>0)
            count++;
            
    }
    printf("%d ",count);
    }
    
    return(0);
    free(A);
}

