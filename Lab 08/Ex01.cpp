#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the no. of income sources :";
    cin>>n;
    int arr[n];
    int tcount=0;
    cout<<"Enter the income from various sources :"<<endl;

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]>9950){
            tcount++;
        }
    }
    if(tcount>0){
        cout<<"No. of taxable income(s) : "<< tcount;
    }
    else{
        cout<<"Not liable to pay income tax";
    }
}
