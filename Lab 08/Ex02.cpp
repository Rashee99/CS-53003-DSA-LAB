#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter no of assignments: ";
    cin>>n;
    if (n>10 || n<0){
        cout<<"No. of assignments must not be more than 10 ";
    }
    else{
        float arr[n];
        int total=0;
        cout<<"Enter the scores :"<<endl;

        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        for(int i=0; i<n; i++){
            total=total+arr[i];
        }
        float avg = float(total)/n;
        cout<<"The average score is "<<avg<<endl;
        if(avg>80){
            cout<<"Eligible for projects";
        }
        else{
            cout<<"Not eligible for projects";
        }
    }
}
