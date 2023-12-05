#include<iostream>

using namespace std;

int printArray(int Arr[], int size){
    int i;
    for (i = 0; i < size; i++){
        cout << Arr[i] << " ";
    }
}

void merge(int arr[],int left, int mid, int right){
    int len1 = mid -left + 1;
    int len2 = right - mid;

    int leftArr[len1], rightArr[len2];

    for (int i =0; i < len1; i++){
        leftArr[i] = arr[left + i];
    }
    for (int j =0; j < len2; j++){
        rightArr[j] = arr[mid + 1 + j];
    }

    int i,j,k;
    i = 0;
    j = 0;
    k = left;

    while (i < len1 && j < len2){
        if (leftArr[i] <= rightArr[j]){
            arr[k] = leftArr[i];
            i++;
        }
        else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }
    while (i < len1){
        arr[k] = leftArr[i];
        i++;
        k++;
    }
    while (j < len2){
        arr[k] = rightArr[j];
        j++;
        k++;
    }

}

void mergeSort(int arr[],int left, int right){
    if (left < right){
        int mid = left + (right - left)/2;

        mergeSort(arr,left,mid);
        mergeSort(arr,mid +1,right);

        merge(arr,left,mid,right);
    }
}


int main(){
    int arr[] = {26,-47,89,100,1,69,78,-20,0,196,25,-30};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << "UnSorted arry : ";
    printArray(arr,size);
    mergeSort(arr,0,size -1);

    cout << "\nSorted array : ";
    printArray(arr,size);

}
