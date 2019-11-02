//
//  main.cpp
//  Gaussion_elimination
//
//  Created by denis  on 01.11.2019.
//  Copyright © 2019 denis . All rights reserved.
//
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n,j,i,k,f;
    cin>>n;
    double temp,A[n][n+1],x[n+1];
    for (int i=0;i<n;i++)
        for (int j=0;j<n+1;j++)
            cin>>A[i][j];
    cout<<endl;
    for (int i =0;i<n;i++)
        if  (A[i][i]==0)
        {
            f=i;
            while (f<n and A[f][i]==0)
                f++;
            for (int j=0;j<n+1;j++)
            {
                x[j]=A[i][j];
                A[i][j]=A[f][j];
                A[f][j]=x[j];
            }
            
        }
    for(j=0; j<n; j++)
       for(i=0; i<n; i++) {
          if(i!=j)
          {
             temp=A[i][j]/A[j][j];
             for(k=0; k<n+1; k++)
                A[i][k]=A[i][k]-temp*A[j][k];
          }
       }
    for (int i=0;i<n;i++)
    {
        temp=A[i][i];
        for (int j=0;j<n+1;j++)
        {
            A[i][j]=A[i][j]/temp;
            if (j!=0)
                cout<<setw(13)<<A[i][j];
            else
                cout<<A[i][j];
        }
        cout<<endl;
    }
    cout<<endl;cout<<endl;
    return 0;
}
