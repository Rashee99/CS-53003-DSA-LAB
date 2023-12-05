#include<iostream>

using namespace std;

int CalculateSum(int m){
    if (m!=0){
        return m+CalculateSum(m-1);
    }
}

int main(){
    int n;
    cout<<"Enter the number of elements :";
    cin>>n;
    cout<<"Total is "<<CalculateSum(n);
}
