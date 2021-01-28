//fibonacci
#include <iostream>
using namespace std;
int main(){
    int total,first=0,second=1,sum;
    cout<<"please enter total number:";
    cin>>total;
    for(int i=0 ; i<total ; i++){
        if(i==0){
            cout<<first<<" ";
        }
        else if(i==1){
            cout<<second<<" ";
        }
        else{
            sum=first+second;
            cout<<sum<<" ";
            first=second;
            second=sum;
        }
    }
}