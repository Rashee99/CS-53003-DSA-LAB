#include<iostream>

using namespace std;

int printArray(int Arr[], int size){
    int i;
    for (i = 0; i < size; i++){
        cout << Arr[i] << " ";
    }
}

int InsectionSort(int Arr[],int n){
    for (int i=1; i<n; i++){
        int key = Arr[i];
        int j = i;
        while (j>0 && Arr[j-1] < key){
            Arr[j] = Arr [j-1];
            j--;
        }
        Arr[j] = key;
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
    InsectionSort(B,m);
    cout << "\nSorrted array :";
    printArray(B,m);
}
