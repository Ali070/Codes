#include <iostream>
#include"Matrix.h"
using namespace std;
int main()
{
Matrix mat1(2,2),mat2(2,2);
cin>>mat1>>mat2;
mat1+mat2;
mat1*mat2;
mat1+3;
mat1-2;
mat1*3;
mat1+=mat2;
mat1-=mat2;
mat1+=3;
mat1-=3;
++mat1;
cout<<mat1;
--mat1;
cout<<mat1;





}
