#include<iostream>
using namespace std;
int main(){
    int j;
    int rows;
    cout<<"please enter rows:";
    cin>>rows;
    for(int i=1; i<=rows; ++i){
        for( j=1; j<=i ; ++j){
            cout<<"* ";
            
            
        }
        
        cout<<"\n";
    }
    return 0;
}