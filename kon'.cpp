//
//  main.cpp
//  test
//
//  Created by denis  on 16.02.2020.
//  Copyright © 2020 denis . All rights reserved.
// fire_mark
#include<iostream>
#include<queue>
#include <stack>
using namespace std;
int main() {
int n,x1,y1,x2,y2,dx,dy,f,s;
int delta_x[8]={2,2,1,1,-1,-1,-2,-2},
delta_y[8]={-1,1,-2,2,-2,2,-1,1};
cin>>n;
int diff[n+1][n+1];
for(int i=0;i<=n;++i)
    for(int j=0;j<=n;++j)
        diff[i][j]=42;//000000;
cin>>x1>>y1>>x2>>y2;
diff[x1][y1]=0;
queue<pair<int,int>> next_pos;
next_pos.push(make_pair(x1,y1));
while(!next_pos.empty())
{
    f=next_pos.front().first;
    s=next_pos.front().second;
    next_pos.pop();
    for(int i=0;i<8;i++)
    {
        dx=f+delta_x[i];
        dy=s+delta_y[i];
        if (dx > 0 && dx<=n && dy > 0 && dy<=n && diff[dx][dy] > diff[f][s] + 1)
            {
             diff[dx][dy]=diff[f][s] + 1;
             next_pos.push(make_pair(dx,dy));
            }
    }
}
/*for (int i=0;i<=n; i++) {
    for (int j=0; j<=n; j++) {
        cout<<diff[i][j]<<"      ";
    }
    cout<<endl;
}*/
cout<<diff[x2][y2]<<endl;
int sol_x[diff[x2][y2]+1];
int sol_y[diff[x2][y2]+1];
//cout<<x2<<" "<<y2<<endl;
sol_y[0]=y2;
sol_x[0]=x2;
int flag=1;
    f=x2;
    s=y2;
int c=1;
while (diff[f][s]!=0)
{
    int i=0;
    while (i<8 || flag==1)
       {
           dx=f+delta_x[i];
           dy=s+delta_y[i];
           if (dx > 0 && dx<=n && dy > 0 && dy<=n && diff[dx][dy] == diff[f][s] - 1)
               {
                  // cout<<dx<<" "<<dy<<endl;
                   sol_x[c]=dx;
                   sol_y[c]=dy;
                   f=dx;
                   s=dy;
                   flag=0;
                   c++;
               }
           i++;
       }
    flag=1;
}
    for(int i=diff[x2][y2];i>=0;i--)
        cout<<sol_x[i]<<" "<<sol_y[i]<<endl;
return 0;
    
}
