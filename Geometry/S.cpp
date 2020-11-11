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
bool leg(double x,double y,double x1,double x2,double y1,double y2)
{
    double value1 = skalar4ik(x-x1, x2-x1, y-y1, y2-y1);
    double value2 =skalar4ik(x-x2, x1-x2, y-y2, y1-y2);
    if (value1 >=0 && value2>=0 && abs( ((x2-x1)*(y-y1)-(y2-y1)*(x-x1))/sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)) )==0)
        return true;
    else
        return false;
}

double det(double a, double b, double c, double d, double e, double f, double g, double h, double i )
{
    return a*e*i+b*f*g+c*d*h-g*e*c-h*f*a-d*b*i;
}
int main()
{
    double x1,x2,x3,y1,y2,y3,a,b,c,x,y,r,s;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    a=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
    b=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
    c=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    x=det((x1*x1+y1*y1),y1,1,(x2*x2+y2*y2),y2,1,(x3*x3+y3*y3),y3,1)/(2*det(x1,y1,1,x2,y2,1,x3,y3,1));
    y=det(x1,(x1*x1+y1*y1),1,x2,(x2*x2+y2*y2),1,x3,(x3*x3+y3*y3),1)/(2*det(x1,y1,1,x2,y2,1,x3,y3,1));
    s=0.5*abs((x2-x1)*(y3-y1)-(x3-x1)*(y2-y1));
    r=(a*b*c)/(4*s);
    printf("%.5lf %.5lf %.5lf",x,y,r);
    
    return 0;
}
