//DO NOT CHANGE THE GIVEN CODE TEMPLATE. WRITE YOUR CODE IN THE PROVIDED PLACES ALONE.
//If required, you can add additional functions or header files.

#include <iostream>
#include<string.h>
using namespace std;

class Stack {
    int top;
    public:
       char box[5][10];
       Stack() {
           top = -1;
        }
       void push(char bkNo[]);
       void pop();
       void display();
};
void Stack::push(char bkNo[]) {
    if(top == 4){
        cout<< "The box is full."<<endl;
    }
    else{
        top++;
        strcpy (box[top], bkNo);
        cout << "Book "<<bkNo<<" has been added to the box."<<endl;
    }
}
void Stack::pop() {
    if (top==-1){
        cout<< "The box is empty"<< endl;
    }
    else {
        char bkNo[10];
        strcpy(bkNo,box[top]);
        top--;
        cout<< "Book "<< bkNo<< " has been removed from the box." << endl;
    }
}
void Stack::display(){
    if(top == -1){
        cout<< "The box is empty."<<endl;
    }
    else{
        cout<<"The books in the box: ";
        for (int i= top; i>= 0; i--){
            cout<<box[i]<< " ";
        }
    }
}
int main(){

    Stack stk;
    char bkNo[10];
    int choice;
    do{
        cout<<"\n1. Insert a book in the box";
        cout<<"\n2. Delete a book from the box";
        cout<<"\n3. Display book box";
        cout<<"\n4. Exit";

        cout<<"\nEnter your choice: ";
        cin>>choice;

        switch(choice) {
            case 1:
                cout<<"\nEnter the book No.: ";
                cin>>bkNo;
                stk.push(bkNo);
                break;

            case 2:
                stk.pop();
                break;

            case 3:
                stk.display();
                break;
            case 4:
                return 0;

            default:
                cout<<"Invalid option\n";
        }
    }while(true);
    return 0;
}
