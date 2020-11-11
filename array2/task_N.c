#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0,*plus,count=1,tmp,m=0,max;
    plus=(int*)malloc(n*sizeof(int));
    if (plus!=NULL)
    {
        while (scanf("%d",&tmp)==1)
        {
                plus=(int*)realloc(plus,sizeof(int)*(n+1));
                plus[n]=tmp;
                n++;
        }
        for (int i=0;i<n-1;i++)
        {
            for (int j=i+1;j<n;j++)
                if (plus[i]==plus[j])
                    count++;
            if (count>m)
            {
                m=count;
                max=plus[i];
                
            }
            count=1;
        }
        if (n==1)
            printf("%d",plus[0]);
        else
            printf("%d ", max);
        return 0;
        free(plus);

    }
        else
        return 1;
}
