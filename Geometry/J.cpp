//
//  main.cpp
//  nearest
//
//  Created by denis  on 23.04.2020.
//  Copyright © 2020 denis . All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
double const pi=acos(-1);
bool povorot(double xa,double xb, double xc, double ya,double yb, double yc)
{
    if ((xb-xa)*(yc-ya)-(xc-xa)*(yb-ya)<=0)
        return false;
    else
        return true;
}
int main()
{
    int n,answer=0;
    cin>>n;
    pair<double, double> dots[n];
    for (int i=0;i<n;i++)
        cin>>dots[i].first>>dots[i].second;
    if (dots[1].first-dots[0].first <0)
        answer++;
    for (int i=2;i<n;i++)
        if (povorot(dots[i-2].first,dots[i-1].first,dots[i].first,dots[i-2].second,dots[i-1].second,dots[i].second))
            answer+=1;
    cout<<answer<<endl;
    return 0;
}
