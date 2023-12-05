#include<iostream>

using namespace std;

int binary_search(int arr[] , int first , int last , int key){
    if(first > last)
        return -1;
    else{
        int mid = (first + last)/2;
            if(key == arr[mid])
                return mid;
            else if (key<arr[mid])
                return binary_search(arr , first , mid-1 , key);
            else
                return binary_search(arr , mid+1 , last , key);
    }
}

int count_occur (int arr[] , int n , int key){
    int result = binary_search(arr , 0 , n-1 , key);
    if (result == -1)
        return 0;

    int count = 1;
    int i = result-1;
    while (i>=0 && arr[i] == key)
        count++ , i--;

    int j = result + 1;
    while (j<n && arr[j] == key)
        count++ , j++;
        return count;
}

int main(){
    int elements , key , n ;
    int start=0 ;

    cout << "No of elements in array : ";
    cin >>  elements ;

    int arr[elements]={};
    for (int i=0; i<elements; i++){
        cout << "Enter the elements : ";
        cin >> arr[i];
    }

    cout<< "searching element : ";
    cin>>key;

    int X = sizeof(arr)/sizeof(arr[0]);
    int results = count_occur (arr , X , key);

    cout << "Number of occurrences of the number : "<< results;
}















