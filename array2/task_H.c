#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n,*arr,s=0,lol=10001,min;
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    if (arr!= NULL)
    {
        for (int i=0;i<n;i++)
            scanf("%d",&arr[i]);
        scanf("%d",&s);
       for (int i=0;i<n;i++)
           if (abs(arr[i]-s)<lol)
           {
               min=arr[i];
               lol=abs(arr[i]-s);
           }
        printf("%d",min);
    }
        return 0;
    
}
