//DO NOT CHANGE THE GIVEN CODE TEMPLATE. WRITE YOUR CODE IN THE PROVIDED PLACES ALONE.
//If required, you can add additional functions or header files.


#include<algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main(){
        int a, b;
        cout <<"Enter the no. of users: ";
        cin >> a;
        cout <<"Enter the no. of connections: ";
        cin >> b;
        vector < vector<int>> setlist(a+1);

        for(int i=0; i<b; i++){
            int x,y;
            cout<<"Enter the start node and end in connection "<<i+1<<":"<<endl;
            cin>>x>>y;
            if (x<1 || x>a ||y<1 ||y>a){
                cout <<"Invalid node number" <<endl;
                i--;
                continue;
            }
            setlist[x].push_back(y);
            setlist[y].push_back(x);
        }
        cout<<"\nThe representation of SocialNet users: "<<endl;
        for(int i = 1; i<=a;i++){
        for(int j =1; j<=a; j++){
                if (find(setlist[i].begin(), setlist[i].end(), j)!=setlist[i].end()){
                    cout<<j<<" ";
                }
                else{
                    cout<<"0 ";
                }

        }
        cout<<endl;
        }
        cout<<"\nThe friends' list of all users" <<endl;
        for(int i =1; i <= a; i++){
            cout<<i <<" -> ";
            if(setlist[i].empty()){
                cout<<0<<endl;
            }
        else{
            for (int j = 0;j<setlist[i].size(); j++){
                cout<<setlist[i][j]<<" ";
            }
            cout<<endl;
        }
        }
   return 0;
}

