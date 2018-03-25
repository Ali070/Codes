#include <iostream>
#include <cmath>
using namespace std;

int main()
{
// FCI Programming 1  2018 Assignment 2
// Program Name: Group Task  , finding roots of quadratic equation
// Last Modification Date:
// Author1 and ID and Group:
// Author2 and ID and Group:
// Author3 and ID and Group:
// Teaching Assistant:
double a,b,c,d,x,y;
cout<<"Enter the first coefficient of the quadratic equation: \n";
cin>>a;
cout<<"Enter the second coefficient of the quadratic equation \n";
cin>>b;
cout<<"Enter the third coefficient of the quadratic equation \n";
cin>>c;
d=sqrt(b*b-4*a*c);
x=(-b+d)/(2*a);
y=(-b-d)/(2*a);
cout<<"The first root of the equation="<<x<<"\n";
cout<<"The second root of the equation="<<y<<"\n";


}
