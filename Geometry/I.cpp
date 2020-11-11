#include <iostream>
#include <cmath>

using namespace std;
double skalar4ik(int x1,int x2,int y1,int y2)
{
    return x1*x2+y1*y2;
}
double vector0k(int x1, int x2, int y1, int y2)
{
    return x1*y2-x2*y1;
}
const double pi = 3.141592653589793;
int main()
{
    double r1,a1,r2,a2;
    cin>>r1>>a1>>r2>>a2;
    a1=pi/180 * a1;
    a2=pi/180*a2;
    cout<<sqrt(r1*r1+r2*r2-2*r1*r2*cos(a1-a2));
    return 0;
}
