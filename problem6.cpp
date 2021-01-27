#include<iostream>
using namespace std;
int main(){
    int height,j,k,i;
    
    cout<<"please input height:";
    cin>>height;
    
    
    for (int i = 0; i < height; i++)
    {
    for(j=0 ; j<=(height-i-1); j++){
        cout<<" ";
    }
    for(j=0;j<(i+1);j++){
        cout<<"* ";
        
        
    }
    cout<<endl;
    }
    
    
}