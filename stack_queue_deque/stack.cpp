//
//  main.cpp
//  new_era
//
//  Created by denis  on 31.10.2019.
//  Copyright © 2019 denis . All rights reserved.
// This is watermark
#include <cstdlib>
#include <iostream>
using namespace std;
int size=0;
void push(int data[],int element)
   {
       size++;
       data=(int*)realloc(data,sizeof(int)*size);
       for (int i=size-1;i>0;i--)
           data[i]=data[i-1];
       data[0]=element;
   }
void pop(int data[])
{
    
    if (size >2)
        for (int i=0;i<size;i++)
            data[i]=data[i+1];
    else
    {
        if (size == 2)
            data[0]=data[1];
    }
    size-=1;
    data=(int*)realloc(data,sizeof(int)*(size));
}

int main()
{
    int *listik,n;
    char oper;
    listik=(int*)malloc(size*sizeof(int));
    cin>>oper;
    while (oper !='e')
    {
        if (oper=='u') {
        cin>>n;
        push(listik,n);
        for (int i=0;i<size;i++)
            cout<<listik[i]<<" ";
        cout<<endl;
        }
        if (oper=='o')
        {
            if (listik!=NULL)
                pop(listik);
            for (int i=0;i<size;i++)
                       cout<<listik[i]<<" ";
                   cout<<endl;
            }
        cin>>oper;
        }
    free(listik);
    size=0;
    return 0;
}
