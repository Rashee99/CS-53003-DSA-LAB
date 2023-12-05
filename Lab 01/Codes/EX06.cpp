#include<iostream>

using namespace std;
float x,y,z;

void Addition(){
    z=x+y;
}
void Substraction(){
    z=x-y;
}
void Multiplication(){
    z=x*y;
}
void Division(){
    z=x/y;
}

int main(){
    cout<<"Enter the number 1 :";
    cin>>x;
    cout<<"Enter the number 2 :";
    cin>>y;

    cout<<"\n1.Addition: +\n2.Substraction: -\n3.Multiplication: *\n4.Division: /\n";
    char a;
    cout<<"Enter the operation : ";
    cin>>a;
    int b = int(a);

    if (b==43){
        Addition();
    }
    else if (b==45){
        Substraction();
    }
    else if (b==42){
        Multiplication();
    }
    else if(b==47){
        Division();
    }
    else{
        cout<<"Invalid Inputs !!!";
    }
    cout<<"\nOperation is "<<x<<" "<<a<<" "<<y<<" = "<<z<<endl;
    return 0;
}
