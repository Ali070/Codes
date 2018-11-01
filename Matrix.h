#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
#include <iomanip>
using namespace std;
class Matrix
{
private:
  int** data;
  int row, col;
public:
    Matrix( int r , int c  );
    Matrix(const Matrix& m);
  void  operator= (const Matrix mat);
  int* & operator[](const int &index) const ;
friend ostream& operator<< (ostream& out, Matrix& mat);
friend istream& operator>> (istream& in, Matrix& mat);
Matrix operator+( Matrix&);
Matrix operator-( Matrix&);
Matrix operator*( Matrix&);
Matrix operator+( int);
Matrix operator-(int);
Matrix operator*(int);
Matrix operator+= (Matrix&);
Matrix operator-= (Matrix&);
Matrix operator+= (int);
Matrix operator-= (int);
void  operator++ ();
void  operator-- ();





};

#endif // MATRIX_H
