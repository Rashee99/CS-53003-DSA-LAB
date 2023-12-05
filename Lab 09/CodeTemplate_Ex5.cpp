//DO NOT CHANGE THE GIVEN CODE TEMPLATE. WRITE YOUR CODE IN THE PROVIDED PLACES ALONE.

#include<iostream>
using namespace std;

class Node {
      public:
          int data;
         Node *next;
};
class Stack{
   public:
       Node *top;
       Stack(){
           top=NULL;
        }
        void push(int data);
        int pop();
};

void Stack :: push(int data){
    Node*temp = new Node();
    temp->data = data;
    temp->next = top;
    top = temp;
}


int Stack ::pop(){
    if(top == NULL){
        return -1;
    }
    int data = top-> data;
    Node*temp = top;
    top = top->next;
    delete temp;
    return data;
}

int checkPalindrome(Stack stk, int arr[],int size) {
    for(int i = 0; i < size; i++){
        int data = stk.pop();
        cout << "\nPopped element : "<< data;
        if (data != arr[i]){
            cout<<endl<<endl;
            return 0;
        }
    }
    cout<<endl<<endl;
    return 1;   //Change this return value according to the problem description
}

int main(){
    Stack stk;
    int size,i,data;

    cout << "\nNumber of inputs : ";
    cin >> size;
    if(size<2){
        cout<<"Invalid input";
        return 0;
    }

    int arr[size];
    cout << "\nEnter the numbers : ";
    for(i=0; i<size; i++){
       cin>>data;
        arr[i]=data;
        stk.push(data);
    }
    int isPalindrome = checkPalindrome(stk, arr, size);
    cout << isPalindrome;

    return 0;
 }
