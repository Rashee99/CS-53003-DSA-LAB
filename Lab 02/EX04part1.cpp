#include<iostream>

using namespace std;

int GCD(int a,int b){
    if (a>b){
        GCD(a-b,b);
    }
    else if (b>a){
        GCD(a,b-a);
    }
    else if (a=b){
        return a;
    }

}
int main(){
    int n,m;
    cout<<"Enter the first number :";
    cin>>n;
    cout<<"Enter the second number :";
    cin>>m;
    cout<<"GCD of "<<n<<" & "<<m<<" is "<<GCD(n,m);
}
