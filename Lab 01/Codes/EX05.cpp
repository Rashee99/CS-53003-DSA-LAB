#include<iostream>

using namespace std;

void reverse(string x){
    char y;
    int z;
    for(int i=x.length()-1;i>=0;i--){
        char y=x[i];
        z=int(y);
        if ((z>=65 && z<=90) || (z>=97 && z) || z==32){
            cout<<x[i];
        }

    }
}

int main(){
    string s;
    getline(cin,s);
    reverse(s);
    cout<<endl;
    return(0);
}
