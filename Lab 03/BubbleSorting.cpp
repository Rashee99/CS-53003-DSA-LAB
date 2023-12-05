#include<iostream>

using namespace std;

int printArray(int Arr[], int size){
    int i;
    for (i = 0; i < size; i++){
        cout << Arr[i] << " ";
    }
}

int BubbleSort(int Arr[],int n){
    for (int k=0; k<n-1; k++){
        for (int i=0; i<n-k-1; i++){
            if (Arr[i] > Arr[i+1]){
                swap(Arr[i],Arr[i+1]);
            }
        }
    }
}

int main(){
    int m;
    cout << "How many numbers do you want to sort : ";
    cin >> m;
    int B[m] ={};
    for (int i=0; i<m; i++){
        cout << "Enter your number : ";
        cin >> B[i];
    }
    cout << "Unsorted array : ";
    printArray(B,m);
    BubbleSort(B,m);
    cout << "\nSorrted array :";
    printArray(B,m);
}
