#include<iostream>

using namespace std;

int binarySearch(int num, int arr[], int arrSize){
    int first = 0;
    int last = arrSize-1;
    int totalCount = 0;

    while (first <= last){
        int mid = (first+last)/2;
        totalCount = totalCount+1;
        if (num == arr[mid]){
            return totalCount;
        }
        else if (num < arr[mid]){
            last = mid-1;
        }
        else {
            first = mid+1;
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
    cout << "Position of the searched element : "<<binarySearch(searchNum,A,aSize);
}
