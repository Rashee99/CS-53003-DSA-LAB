//DO NOT CHANGE THE GIVEN CODE TEMPLATE. WRITE YOUR CODE IN THE PROVIDED PLACES ALONE.
//If required, you can add additional functions or header files.

#include<iostream>
#include<stack>

using namespace std;

int main(){
    // stack:
    int hur,height;
    stack<int> Score;
    cout << "Enter the no. of hurdles : ";
    cin >> hur;
    if (hur <=0 || hur>= 101){
        cout << "Invalid no. of hurdles";
    }
    else{
        for (int i=0; i<hur; i++){
            cout << "Enter the hurdle height " << i+1<<": ";
            cin >> height;
            Score.push(height);
        }
        cout << "Latest hurdle race scores are : ";

        int last_five[5];
        for (int i=0; i<5; i++){
            last_five[i] = Score.top();
            Score.pop();
        }

        for (int i = 4; i >=0; i--){
            cout << last_five[i] << " ";
        }
        cout << endl;
    }

    return 0;
}

