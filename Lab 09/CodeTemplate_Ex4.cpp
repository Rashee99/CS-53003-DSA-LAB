//DO NOT CHANGE THE GIVEN CODE TEMPLATE. WRITE YOUR CODE IN THE PROVIDED PLACES ALONE.
#include <iostream>
using namespace std;

class Queue {
    public:
        int front, rear;
        int personQueue[5];
        Queue() {
            front=rear=-1;
        }
        void enQueue(int codeNumber);
        void deQueue();
        void display();
};

void Queue::enQueue(int codeNumber)  {
    if(rear == 4){
        cout<<"\nCurrently, the Queue is full.\n";
        return;
    }
    else if (front == -1){
        front =0;
    }
    rear++;
    personQueue[rear] = codeNumber;
    cout<< "\nPerson is added to the queue." <<endl;
 }

void Queue:: deQueue() {
    if(front == -1){
        cout << "\nThe Queue is empty.\n";
        return;
    }
    int removedCodeNumber = personQueue[front];
    if (front == rear){
        front = rear = -1;
    }
    else{
        front++;
    }
    cout << "\nThe person removed from the queue."<<removedCodeNumber<< endl;
}

void Queue::display(){
    if(front == -1){
        cout << "\nThe queue is empty.\n";
        return;
    }
    cout <<"\nThe person in the queue : \n";
    for (int i = front; i<= rear; i++){
        cout << personQueue[i]<<endl;
    }
}


int main() {
    Queue q;
    int codeNumber;
    int choice;
    do{
        cout<<"\n1.Add a person to the Queue";
        cout<<"\n2.Remove a person from the Queue";
        cout<<"\n3.Display all the code numbers";
        cout<<"\n4.Exit"<<endl;
        cout<<"\nEnter your choice: ";
        cin>>choice;
        switch(choice) {
            case 1:
                cout<<"\nEnter the code no. of the person: ";
                cin>>codeNumber;
                q.enQueue(codeNumber);
                break;

            case 2:
                q.deQueue();
                break;

            case 3:
                q.display();
                break;

            case 4:
                return 0;

            default:
                cout<<"Invalid option\n";
        }

    }while(true);

    return 0;
}

