#include<iostream>

using namespace std;

int printArray(int Arr[], int size){
    int i;
    for (i = 0; i < size; i++){
        cout << Arr[i] << " ";
    }
}
int SelectionSort(int Arr[], int n){
    for (int i=0; i<n-1; i++){
            int Minimum = i;
            for (int j=i+1; j<n; j++){
                if (Arr[j] < Arr[Minimum]){
                    Minimum = j;
                }
            }
            if (Minimum != i){
                swap(Arr[i],Arr[Minimum]);
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
    SelectionSort(B,m);
    cout << "\nSorrted array :";
    printArray(B,m);
}

