#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,*arr,k,temp,temp2,z,t;
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    if (arr!= NULL)
    {
        for (int i=0;i<n;i++)
            scanf("%d",&arr[i]);
        scanf("%d",&k);
        if (k>0)
        {
            k=k%n;
            z=n/k;
            if (z*k==n)
                for (int j=0;j<k;j++)
                    for (int m=0+j;m<z;m=m+1+j)
                    {
                        if (m==0+j){
                            temp=arr[m+k];
                            arr[m+k]=arr[m];
                        }
                        else
                        {
                          temp2=arr[(m+k)%n];
                          arr[(m+k)%n]=temp;
                          temp=temp2;
                        }
                    }
                
            
                
         
        for (int i=0;i<n;i++)
            printf("%d ",arr[i]);
        free(arr);
        return 0;
    }
        else
            return 1;
    
}
