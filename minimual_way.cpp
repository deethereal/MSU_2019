//
//  main.cpp
//  test
//
//  Created by denis  on 10.02.2020.
//  Copyright © 2020 denis . All rights reserved.
//
#include <queue>
#include <iostream>
using namespace std;
int main(){
    int n,enter,exit;
    cin>>n;
    vector<vector<int>> matrix(n);
    for (auto& r: matrix)
        r.resize(n);
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
            cin>>matrix[i][j];
    }
    cin >>enter>>exit;
    enter--;
    exit--;
    queue <int> we_gonna_be_here;
    we_gonna_be_here.push(enter);
    vector<bool> been_here(n);
    vector<int> length(n),parents(n);
    for (int i=0;i<n;i++)
        been_here[i]=false;
    been_here[enter]=true;
    parents[enter]=-1;
    while (!we_gonna_be_here.empty()){
        int temp = we_gonna_be_here.front();
        we_gonna_be_here.pop();
        for ( int i=0; i<n; ++i)
        {
            int destination=matrix[temp][i];
            bool local_temp=been_here[i];
            if (!local_temp && destination==1)
            {
                been_here[i]=true;
                we_gonna_be_here.push(i);
                length[i]=length[temp]+1;
                parents[i]=temp;
            }
        }
    }
        if (!been_here[exit])
            cout<<-1;
        else{
            if (enter!=exit){
                cout<<length[exit]<<endl;
                if (length[exit]!=0)
                {
                    vector<int> submition;
                    for (int temp=exit; temp!=-1; temp=parents[temp])
                        submition.push_back(temp);
                    for (int i=submition.size()-1;i>=0;i--)
                        cout<<submition[i]+1<<" ";
                }
            }
            else
                cout<<0;
    }
    cout<<endl;

    return 0;
}
