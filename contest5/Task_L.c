#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
int main()
{
    int n,*A,count,hight;
    scanf("%d",&n);
    A=(int*)malloc(n*sizeof(int));
    if (A!= NULL)
    {
        for (int i=0;i<n;i++)
            scanf("%d",&A[i]);
        scanf("%d",&hight);
        count=1;
        for (int i=0;i<n;i++){
            if (A[i]>=hight)
                count++;
        }
        printf("%d",count);
    }
    free(A);
    return(0);
}

