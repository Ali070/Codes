#include "Matrix.h"
#include <iostream>
#include <iomanip>
using namespace std;
Matrix::Matrix( int r,  int c)
{
  row = r;
  col = c;
  data = new int* [row];

  for (int i = 0; i < row; i++)
    data[i] = new int [col];

  for (int i = 0; i < row; i++)
    for (int j = 0; j < col; j++)
      data[i][j] = 0;
}
Matrix::Matrix(const Matrix& m){
row=m.row;
col=m.col;
data= new int* [row];
for(int i=0; i<row; i++){
 data[i]=new int[col] ;
}
for(int i=0;i<row;i++){
for(int j=0;j<col;j++)
data[i][j]=m.data[i][j];
}
}
istream& operator>> (istream& in, Matrix& mat)
{
    cout <<"Enter the elements of the matrix"<<"\n";
    int r=mat.row;
    int c=mat.col;
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        in>>mat.data[i][j];
    }
}
return in;
}
ostream& operator<< (ostream& out, Matrix& mat){
cout<<endl<<endl;
for(int i=0;i<mat.row;i++){
    for(int j=0;j<mat.col;j++){
        out<<mat.data[i][j]<<setw(6);
    }
    cout<<"\n";
}
return out;
}
int* & Matrix::operator [](const int &index) const  // overloading operator []
{
  return  data [index];
}
void Matrix:: operator= (const Matrix mat){
if(data !=mat.data && col==mat.col && row==mat.row)
     {
       for(int i=0;i<row;i++)
        for(int j=0;j<col;j++)
            mat[i][j]=mat.data[i][j];
     }
    }
Matrix Matrix:: operator+( Matrix&m){
if(row==m.row && col==m.col){
Matrix new_mat(row,col);
for (int i=0; i<row; i++){
		for (int j=0; j<col; j++){
			new_mat.data[i][j] = data[i][j] + m.data[i][j];
		}
	}
	cout<<"The Addition of 2 matrices :"<<endl;
	cout<<new_mat;
	return new_mat;
	cout<<"\n";


}
else{
        cout<<"The matrices rows and columns are not equal"<<endl;
}
}
Matrix Matrix:: operator-( Matrix&m){
if(row==m.row && col==m.col){
Matrix new_mat(row,col);
for (int i=0; i<row; i++){
		for (int j=0; j<col; j++){
			new_mat.data[i][j] = data[i][j] - m.data[i][j];
		}
	}
	cout<<"The Subtraction of 2 matrices :"<<endl;
	cout<<new_mat;
	return new_mat;
	cout<<"\n";


}
else{
        cout<<"The matrices rows and columns are not equal"<<endl;
}
}
Matrix Matrix:: operator*( Matrix&m){
if(col==m.row){
int c;
m.col=c;
Matrix new_mat(row,c);
 for(int i=0;i<row;i++){
    for(int j=0;j<c;j++){
            for(int k=0;k<col;k++){
        new_mat.data[i][j]+=data[i][k] * m.data[k][j];
            }
    }
 }
 cout<<"The multiplication of 2 matrices :"<<endl;
 cout<<new_mat;
 return new_mat;
 cout<<"\n";
}
else{
    cout<<"The matrices can not be multiplied"<<endl<<endl;
}

}
Matrix Matrix:: operator+(int scalar){
Matrix new_mat(row,col);
for (int i=0; i<row; i++){
		for (int j=0; j<col; j++){
			new_mat.data[i][j] = data[i][j] + scalar;
		}
	}
	cout<<"The Addition of matrix and scalar :"<<endl;
	cout<<new_mat;
	return new_mat;
	cout<<"\n";
}
Matrix Matrix:: operator-(int scalar){
Matrix new_mat(row,col);
for (int i=0; i<row; i++){
		for (int j=0; j<col; j++){
			new_mat.data[i][j] = data[i][j] - scalar;
		}
	}
	cout<<"The Subtracton of scalar from matrix :"<<endl;
	cout<<new_mat;
	return new_mat;
	cout<<"\n";
}
Matrix Matrix:: operator*(int scalar){
Matrix new_mat(row,col);
for (int i=0; i<row; i++){
		for (int j=0; j<col; j++){
			new_mat.data[i][j] = data[i][j] * scalar;
		}
	}
	cout<<"The Multiplication of matrix and scalar :"<<endl;
	cout<<new_mat;
	return new_mat;
	cout<<"\n";
}
Matrix Matrix:: operator+= (Matrix& mat){
if(row==mat.row && col==mat.col)
    {
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                data[i][j]=data[i][j]+mat.data[i][j];
            }
        }
    }
    Matrix new_mat(row,col);
    new_mat.data=data;
    cout<<"The Addition of 2 matrices and put values in first matrix  :"<<endl;
	cout<<new_mat;
	return new_mat;
	cout<<"\n";
}
Matrix Matrix:: operator-= (Matrix& mat){
if(row==mat.row && col==mat.col)
    {
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                data[i][j]=data[i][j]-mat.data[i][j];
            }
        }
    }
    Matrix new_mat(row,col);
    new_mat.data=data;
    cout<<"The Subtraction of 2 matrices and put values in first matrix  :"<<endl;
	cout<<new_mat;
	return new_mat;
	cout<<"\n";
}
Matrix Matrix:: operator+= (int scalar){
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                data[i][j]=data[i][j]+scalar;
            }
        }

    Matrix new_mat(row,col);
    new_mat.data=data;
    cout<<"The Addition of matrix and scalar and put values the matrix  :"<<endl;
	cout<<new_mat;
	return new_mat;
	cout<<"\n";
}
Matrix Matrix:: operator-= (int scalar){
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                data[i][j]=data[i][j]-scalar;
            }
        }

    Matrix new_mat(row,col);
    new_mat.data=data;
    cout<<"The Subtraction of matrix and scalar and put values the matrix  :"<<endl;
	cout<<new_mat;
	return new_mat;
	cout<<"\n";
}
void Matrix:: operator++ (){
cout<<"Adding one to all elements of matrix:"<<endl<<endl;
    for(int i=0; i<row; i++)
    {
        for (int j=0; j<col; j++)
        {
            ++data[i][j];
        }

    }
}
void Matrix:: operator-- (){
cout<<"Subtracting one from all elements of matrix:"<<endl<<endl;
    for(int i=0; i<row; i++)
    {
        for (int j=0; j<col; j++)
        {
            --data[i][j];
        }

    }
}






