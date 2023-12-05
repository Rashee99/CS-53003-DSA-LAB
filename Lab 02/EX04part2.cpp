#include<iostream>

using namespace std;

int main(){
    int a,b;
    cout<<"Enter the first number :";
    cin>>a;
    cout<<"Enter the second number :";
    cin>>b;

    while (a!=b){
       if (a>b){
            a=a-b;
       }
       else{
            b=b-a;
       }
    }
    cout<<"GCD of two number is "<<a;
}

