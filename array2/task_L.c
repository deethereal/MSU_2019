#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n=0,*arr,count=0,tmp;
    scanf("%d",&n);
    arr=(int*)malloc(n*sizeof(int));
    for (int i=0;i<n;i++){
        scanf("%d",&tmp);
        if (tmp!=0){
                arr[count]=tmp;
                count++;
            }
    }

    for (int j=0;j<n;j++){
            if (j>=count)
                arr[j]=0;
        printf("%d ",arr[j]);
        }
      return 0;
        free(arr);
    }
