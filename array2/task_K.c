#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n;
    float *arr,temp,prev;
    scanf("%d",&n);
    arr=(float*)malloc(n*sizeof(float));
    if (arr!= NULL)
    {
        for (int i=0;i<n;i++)
            scanf("%f",&arr[i]);
        prev=arr[0];
        for (int i=1;i<n-1;i++)
        {
            temp=arr[i];
            arr[i]=(float)(prev+arr[i+1])/2;
            prev=temp;
            
        }
        printf("%d ",(int)arr[0]);
        for (int i=1;i<n-1;i++)
            printf("%.1f ",arr[i]);
        if (n!=1)
            printf("%d ",(int)arr[n-1]);
    }
        return 0;
    
}
