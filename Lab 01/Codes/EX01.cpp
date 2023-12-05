#include<iostream>

using namespace std;

int main(){
    int dividend,divisor;
    cout<<"Enter the dividend: ";
    cin>>dividend;

    cout<<"Enter the divisor: ";
    cin>>divisor;

    int quotient = dividend/divisor;
    cout<<"The quotient is: "<<quotient<<endl;

    int remainder = dividend%divisor;
    cout<<"The remainder is: "<<remainder;
}
