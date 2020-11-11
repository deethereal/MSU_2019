#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nn=0,n=0,*plus,*minus,count=0,tmp,m=0;
    plus=(int*)malloc(n*sizeof(int));
    minus=(int*)malloc(nn*sizeof(int));
    if (plus!=NULL && minus!=NULL)
    {
        while (scanf("%d",&tmp)==1)
        {
            if (tmp>=0){
                plus=(int*)realloc(plus,sizeof(int)*(n+1));
                plus[n]=tmp;
                n++;
            }
            else
               {
                   minus=(int*)realloc(minus,sizeof(int)*(nn+1));
                   minus[nn]=tmp;
                   nn++;
                }
        }
        for (int i=0;i<n-1;i++)
            for (int j=i+1;j<n;j++)
                if (plus[i]==plus[j])
                    count++;
        for (int i=0;i<nn-1;i++)
            for (int j=i+1;j<nn;j++)
                if (minus[i]==minus[j])
                    count++;
        printf("%d",count);
        return 0;
        free(plus);
        free(minus);
    }
        else
        return 1;
}
