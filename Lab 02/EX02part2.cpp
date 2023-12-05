#include<iostream>

using namespace std;

int Factorial(int m){
    if (m>1){
        return m*Factorial(m-1);
    }
}

int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<Factorial(n);

}
