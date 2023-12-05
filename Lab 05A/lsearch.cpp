#include<iostream>

using namespace std;

int linear_search(int num, int arr[], int arrSize){
    for (int i=0; i<arrSize; i++){
        if (arr[i]==num){
            return i+1;
        }
    }
    return -1;
}

int main(){
    int aSize, searchNum;

    cout << "How many numbers in your array? : ";
    cin >>  aSize;
    int A[aSize]={};
    for (int j=0; j<aSize; j++){
        cout << "Enter a number: ";
        cin >> A[j];
    }

    cout << "What is the number you want to search? ";
    cin >> searchNum;
    cout << "Position of the searched element : "<<linear_search(searchNum,A,aSize);
}
