#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f=1,count=0,tmp,eq;
        while (scanf("%d",&tmp)==1)
        {
            if (f==1 || tmp>eq)
            {
                f=0;
                eq=tmp;
                count++;
            }
        }
      
        printf("%d ",count);
        return 0;

    
