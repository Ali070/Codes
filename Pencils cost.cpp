#include <iostream>
using namespace std;
int main()
{
// FCI - Programming 1 - 2018 - Assignment 2
// Program Name: Pencils cost.CPP
// Last Modification Date: 1/3/2018
// Author and ID and Group: Ali Samir Abdou 20170172 G7
// Teaching Assistant:
// Purpose:This program is used to get the cost of pencils in number of years
    int number_of_years,n;
    double pencilcost,finalcost,inflation_rate;
    cout<<"Enter the number of years: \n";
    cin>>number_of_years;
    n=number_of_years;
    cout<<"Enter the cost of one pencil: \n";
    cin>>pencilcost;
    cout<<"Enter the inflation rate: \n";
    cin>>inflation_rate;
    inflation_rate = inflation_rate / 100;
    while(number_of_years > 0){
            finalcost = pencilcost + (inflation_rate * pencilcost);
            number_of_years--;

    }
    cout<<"200 pencils in "<< n <<" years will cost:"<<finalcost * 200<<"\n";

}
