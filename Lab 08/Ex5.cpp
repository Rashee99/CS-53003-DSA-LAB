//PLEASE DO NOT CHANGE THE GIVEN CODE TEMPLATE. WRITE YOUR CODE IN THE PROVIDED PLACES ALONE.

#include<iostream>
using namespace std;
class Node {
    public:
        //Fill your code here
        int data;
        Node* next;
};


class LinkedList {
   public:
        Node *head;
        LinkedList() {
            head = NULL;
        }
        void append(int);
        void deleteAllOccurrences(int key);
        void display();
};

void LinkedList :: append(int value){
    //Write your code here
    Node *newNode = new Node;
    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL) {
        head = newNode;
        return;
    }

    Node *temp = head;
    while(temp->next != NULL)
        temp = temp->next;

    temp->next = newNode;

}


void LinkedList :: deleteAllOccurrences(int key){
    //Write your code here
    Node *temp = head, *prev = NULL;

    while(temp != NULL && temp->data == key) {
        head = temp->next;
        delete temp;
        temp = head;
    }

    while(temp != NULL) {
        while(temp != NULL && temp->data != key) {
            prev = temp;
            temp = temp->next;
        }

        if(temp == NULL)
            return;

        prev->next = temp->next;
        delete temp;
        temp = prev->next;
    }

}

void LinkedList :: display() {
    Node *temp = head;
    cout<<"\nThe list after deletion: ";
    while(temp != NULL) {
        cout<<temp->data << " ";
        temp = temp->next;
    }
}


int main(){
    cout<<"\nEnter the size of the list: ";
    int N,value;
    LinkedList lst;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>value;
        lst.append(value);
    }
    cout<<"\nEnter the element to be deleted: ";
    int delValue;
    cin>>delValue;

    // Write your here here for deleting and displaying the elements in the list

    lst.deleteAllOccurrences(delValue);
    lst.display();




    return 0;
}

