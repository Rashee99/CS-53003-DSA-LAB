#include<iostream>

using namespace std;

int binarySearch(int arr[],int first, int last, int num){
        int mid = (first+last)/2;
        if (num == arr[mid]){
            return mid+1;
        }
        else if (num < arr[mid]){
            binarySearch(arr,first,mid-1,num);
        }
        else {
            binarySearch(arr,first+1,last,num);
        }

}
int main(){
    int aSize, searchNum;
    int start = 0;

    cout << "How many numbers in your array? : ";
    cin >>  aSize;
    int A[aSize]={};
    for (int j=0; j<aSize; j++){
        cout << "Enter a number: ";
        cin >> A[j];
    }

    cout << "What is the number you want to search? ";
    cin >> searchNum;
    cout << "Position of the searched element : "<<binarySearch(A,start,aSize-1,searchNum);
}

