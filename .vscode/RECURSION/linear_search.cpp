#include<iostream>
using namespace std;
bool linear(int arr[],int index,int n,int x){
    if (index==n){
        return 0;
    }
    if(arr[index]==x){
        return 1;
    }
    else{
        return linear(arr,index+1,n,x);
    }
    return 0;
}
int main(){
    int arr[]={2,3,4,5,6};

   
    cout<<linear(arr,0,5,6);
}
