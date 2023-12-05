#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    int Factorial = 1;
    for (int i=1;i<=n;i++){
        Factorial = Factorial*i;
    }
    cout<<"The Factorial of "<<n<<" is "<<Factorial;

}
