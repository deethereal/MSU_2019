#include <cmath>
#include <iostream>
using namespace std;
const double Pi = acos(-1);

int main(){
    double x0,y0,x1,y1,x2,y2,x,y;
    double a1,a2,a3;
    cin>>x1>>y1>>x0>>y0>>x2>>y2>>x>>y;
    if (x0==x && y0==y)
        cout<<"YES";
    else {
        a1=acos(((x1-x0)*(x-x0)+(y1-y0)*(y-y0))/(sqrt((x1-x0)*(x1-x0)+(y1-y0)*(y1-y0))*sqrt((x-x0)*(x-x0)+(y-y0)*(y-y0))));
        a2=acos(((x2-x0)*(x-x0)+(y2-y0)*(y-y0))/(sqrt((x2-x0)*(x2-x0)+(y2-y0)*(y2-y0))*sqrt((x-x0)*(x-x0)+(y-y0)*(y-y0))));
        a3=acos(((x1-x0)*(x2-x0)+(y1-y0)*(y2-y0))/(sqrt((x1-x0)*(x1-x0)+(y1-y0)*(y1-y0))*sqrt((x2-x0)*(x2-x0)+(y2-y0)*(y2-y0))));
        if ((a1+a2+0.00005>=a3) && (a1+a2-0.00005<=a3)){
            cout<<"YES ";
        } else {
            cout<<"NO ";
        }
    }
}
