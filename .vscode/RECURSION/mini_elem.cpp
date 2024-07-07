#include<iostream>
#include <algorithm>
using namespace std;

int minel(int arr[],int index,int n){

    if(index==n-1){
        return arr[index];
    }

   return  max(arr[index],minel(arr,index+1,n));

}

int main(){
    int arr[5]={1,4,5,8,3};
   cout<<  minel(arr,0,5);

    
}