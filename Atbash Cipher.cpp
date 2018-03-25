#include <iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
  // FCI - Programming 1 - 2018 - Assignment 2
// Program Name: Atbash cipher.CPP
// Last Modification Date: 1/3/2018
// Author and ID and Group: Ali Samir Abdou 20170172 G7
// Teaching Assistant:
// Purpose:This program is to make Atbash cipher
  cout<<"Ahlan ya user ya habibi.\n";
  cout<<"What do you like to do today? \n";
  cout<<"1- Cipher a message \n";
  cout<<"2- Decipher a message \n";
  cout<<"End \n";
  while(1){
      string x,y;
      int i=0,j=0;
      cout<<"Enter the message you want to cipher:\n";
      getline(cin,x);
      while(i<x.length()){
        if(x[i]=='A')
            x[i]='Z';
        else if(x[i]=='a')
            x[i]='z';
        else if(x[i]=='B')
            x[i]='Y';
        else if(x[i]=='b')
            x[i]='y';
        else if(x[i]=='C')
            x[i]='X';
        else if(x[i]=='c')
            x[i]='x';
        else if(x[i]=='D')
            x[i]='W';
        else if(x[i]=='d')
            x[i]='w';
        else if(x[i]=='E')
            x[i]='V';
        else if(x[i]=='e')
            x[i]='v';
        else if(x[i]=='F')
            x[i]='U';
        else if(x[i]=='f')
            x[i]='u';
        else if(x[i]=='G')
            x[i]='T';
        else if(x[i]=='g')
            x[i]='t';
        else if(x[i]=='H')
            x[i]='S';
        else if(x[i]=='h')
            x[i]='s';
        else if(x[i]=='I')
            x[i]='R';
        else if(x[i]=='i')
            x[i]='r';
        else if(x[i]=='J')
            x[i]='Q';
        else if(x[i]=='j')
            x[i]='q';
        else if(x[i]=='K')
            x[i]='P';
        else if(x[i]=='k')
            x[i]='p';
        else if(x[i]=='L')
            x[i]='O';
        else if(x[i]=='l')
            x[i]='o';
        else if(x[i]=='M')
            x[i]='N';
        else if(x[i]=='m')
            x[i]='n';
        else if(x[i]=='N')
            x[i]='M';
        else if(x[i]=='n')
            x[i]='m';
        else if(x[i]=='O')
            x[i]='L';
        else if(x[i]=='o')
            x[i]='l';
        else if(x[i]=='P')
            x[i]='K';
        else if(x[i]=='p')
            x[i]='k';
        else if(x[i]=='Q')
            x[i]='J';
        else if(x[i]=='q')
            x[i]='j';
        else if(x[i]=='R')
            x[i]='I';
        else if(x[i]=='r')
            x[i]='i';
        else if(x[i]=='S')
            x[i]='H';
        else if(x[i]=='s')
            x[i]='h';
        else if(x[i]=='T')
            x[i]='G';
        else if(x[i]=='t')
            x[i]='g';
        else if(x[i]=='U')
            x[i]='F';
        else if(x[i]=='u')
            x[i]='f';
        else if(x[i]=='V')
            x[i]='E';
        else if(x[i]=='v')
            x[i]='e';
        else if(x[i]=='W')
            x[i]='D';
        else if(x[i]=='w')
            x[i]='d';
        else if(x[i]=='X')
            x[i]='C';
        else if(x[i]=='x')
            x[i]='d';
        else if(x[i]=='Y')
            x[i]='B';
        else if(x[i]=='y')
            x[i]='b';
        else if(x[i]=='A')
            x[i]='Z';
        else if(x[i]=='a')
            x[i]='z';


        i++;
}
cout<<x<<endl;
cout<<"Enter the message you want to decipher \n";
getline(cin,y);
while(j<y.length()){
        if(y[j]=='Z')
            y[j]='A';
        else if(y[j]=='z')
            y[j]='a';
        else if(x[i]=='Y')
            y[j]='B';
        else if(y[j]=='y')
            y[j]='b';
        else if(y[j]=='X')
            y[j]='C';
        else if(y[j]=='x')
            y[j]='c';
        else if(y[j]=='W')
            y[j]='D';
        else if(y[j]=='w')
            y[j]='d';
        else if(y[j]=='V')
            y[j]='E';
        else if(y[j]=='v')
            y[j]='e';
        else if(y[j]=='U')
            y[j]='F';
        else if(y[j]=='u')
            y[j]='f';
        else if(y[j]=='T')
            y[j]='G';
        else if(y[j]=='t')
            y[j]='g';
        else if(y[j]=='S')
            y[j]='H';
        else if(y[j]=='s')
            y[j]='h';
        else if(y[j]=='R')
            y[j]='I';
        else if(y[j]=='r')
            y[j]='i';
        else if(y[j]=='Q')
            y[j]='J';
        else if(y[j]=='q')
            y[j]='j';
        else if(y[j]=='P')
            y[j]='k';
        else if(y[j]=='p')
            y[j]='k';
        else if(y[j]=='O')
            y[j]='L';
        else if(y[j]=='o')
            y[j]='l';
        else if(y[j]=='N')
            y[j]='M';
        else if(y[j]=='n')
            y[j]='m';
        else if(y[j]=='M')
            y[j]='N';
        else if(y[j]=='m')
            y[j]='n';
        else if(y[j]=='L')
            y[j]='O';
        else if(y[j]=='l')
            y[j]='o';
        else if(y[j]=='K')
            y[j]='P';
        else if(y[j]=='k')
            y[j]='p';
        else if(y[j]=='J')
            y[j]='Q';
        else if(y[j]=='j')
            y[j]='q';
        else if(y[j]=='I')
            y[j]='R';
        else if(y[j]=='i')
            y[j]='r';
        else if(y[j]=='H')
            y[j]='S';
        else if(y[j]=='h')
            y[j]='s';
        else if(y[j]=='G')
            y[j]='T';
        else if(y[j]=='g')
            y[j]='t';
        else if(y[j]=='F')
            y[j]='U';
        else if(y[j]=='f')
            y[j]='u';
        else if(y[j]=='E')
            y[j]='V';
        else if(y[j]=='e')
            y[j]='V';
        else if(y[j]=='D')
            y[j]='W';
        else if(y[j]=='d')
            y[j]='w';
        else if(y[j]=='C')
            y[j]='X';
        else if(y[j]=='c')
            y[j]='x';
        else if(y[j]=='B')
            y[j]='Y';
        else if(y[j]=='b')
            y[j]='y';
        else if(y[j]=='Z')
            y[j]='A';
        else if(y[j]=='z')
            y[j]='a';


        j++;

}
cout<<y<<endl;

}



}

























