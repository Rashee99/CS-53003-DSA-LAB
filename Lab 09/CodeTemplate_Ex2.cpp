//DO NOT CHANGE THE GIVEN CODE TEMPLATE. WRITE YOUR CODE IN THE PROVIDED PLACES ALONE.

#include<iostream>
using namespace std;
#define MAX 50

class Stack {
    int top;
    int mid;
    public:
      char stk[MAX];
      Stack() {
          top = -1;
        }
      void push(int data);
      int findMiddle();
      int pop();
};

void Stack::push(int data) {
    if(top >= MAX-1){
        cout<<"Stack overflow"<<endl;
        return;
    }
     stk[++top]=data;
     if(top == 0){
        mid = 0;
     }
     else if(top % 2 == 0){
        mid++;
     }
}

int Stack::pop(){
    if (top < 0){
        cout<<"Stack overflow"<<endl;
        return -1;
    }
    int data = stk[top];
    top--;
    if(top % 2 == 1){
        mid--;
    }
    return data;
}

int Stack::findMiddle() {
    if(mid == -1){
            cout<<"Stack is empty"<<endl;
            return -1;
    }
    return stk[mid];
}

int  main() {
       int no;
       Stack st;
       cout<<"\nEnter the number of elements to be pushed into the stack : ";
       cin>>no;
       cout<< endl;

       if(no <= 0){
        cout<< "Invalid Input" << endl;
        return 0;
       }
       for(int i = 0; i<no; i++){
        int data;
        cout<<"Enter Element "<< i + 1 <<" : ";
        cin >> data;
        st.push(data);
       }
       cout<< "\nThe middle element is : " << st.findMiddle();
       cout<< "\nThe Popped element is : " << st.pop()<<endl;

       return 0;
}
