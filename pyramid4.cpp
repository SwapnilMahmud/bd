#include<iostream>
using namespace std;
int main()
{
    
    int i,j,k,rows;
    cout << "please enter rows:";
    cin >> rows;
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }
    return 0;
}