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

int main()
{
    double xa,ya,xb,yb,xc,yc,alpha;
    cin>>xa>>ya>>xb>>yb>>xc>>yc;
    alpha = (xb-xa)*(yc-ya)-(xc-xa)*(yb-ya);
    if (alpha>0)
        cout<<"LEFT";
    if (alpha<0)
        cout<<"RIGHT";
    if (alpha==0)
        cout<<"BOTH";
    return 0;
}
