#include<iostream>
using namespace std;
int main(){
    // int n;
    int a[6];
    int i;
    for(i=0;i<=6;i++){
        cin>>a[i];
    }
    for(i=0;i<=6;i++){
        cout<<a[i];   
    }
    for(i=0;i<=6;i++){
        
        int c = swap(i,i+1);
        cout<<c;
        
    }
}