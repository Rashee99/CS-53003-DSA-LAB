#include<iostream>

using namespace std;

int Fibonacci(int m){
    int fib = 1;
    if (m>2){
        fib = Fibonacci(m-1) + Fibonacci(m-2);
        return fib;
    }
    else{
        return 1;
    }

}
int main(){
    int n;
    cout<<"Enter the number :";
    cin>>n;
    cout<<"Fibonacci "<<n<<": "<<Fibonacci(n);
}
