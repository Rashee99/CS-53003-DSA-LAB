#include<iostream>

using namespace std;

int main(){
    int i,j,rows;
    cout<<"Enter a Number: ";
    cin>>rows;

    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            cout<<"$";
        }
        cout<<endl;
    }

    for(i=rows-1;i>=1;i--){
        for(j=i;j>=1;j--){
            cout<<"$";
        }
        cout<<endl;
    }
}

