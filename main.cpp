//
//  main.cpp
//  Gaussion_elimination
//
//  Created by denis  on 31.10.2019.
//  Copyright © 2019 denis . All rights reserved.
//
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n,j,i,k;
    cin>>n;
    double temp,A[n][n+1],x[n];
    for (int i=0;i<n;i++)
        for (int j=0;j<n+1;j++)
            cin>>A[i][j];
    cout<<endl;
    for (int i =0;i<n;i++)
        if  (A[i][i]==0)
        {
           if (i==0)
               for (j=0;j<n+1;j++)
               {
                   x[j]=A[i][j];
                   A[i][j]=A[i+1][j];
                   A[i+1][j]=x[j];
               }
            else
            {
                for (j=0;j<n+1;j++)
                {
                    x[j]=A[i][j];
                    A[i][j]=A[i-1][j];
                    A[i-1][j]=x[j];
                }
            }
        }
    for(j=0; j<n; j++)
       for(i=0; i<n; i++) {
          if(i!=j) {
             temp=A[i][j]/A[j][j];
             for(k=0; k<n+1; k++)
                A[i][k]=A[i][k]-temp*A[j][k];
          }
       }
    for (int i=0;i<n;i++)
    {
        temp=A[i][i];
        for (int j=0;j<n+1;j++){
            
            A[i][j]=A[i][j]/temp;
            cout<<setw(10)<<A[i][j];
        }
        cout<<endl;
    }
    cout<<endl;cout<<endl;
    return 0;
}
