#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n = ";
    cin>>n;

    for(int i=1;i<=n;i++){
        int u = i;
        for(int j=1;j<=i;j++){
            cout<<u;
            u--;
        }
        cout<<endl;
    }
}