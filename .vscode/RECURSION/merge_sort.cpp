#include<iostream>
#include<vector>
using namespace std;
void merge(int arr[],int mid,int start,int end){
    vector<int>temp(end-start+1);
    int left =start,right =mid+1,index=0;

    while(left<=mid && right<=end){
    if (arr[left]<=arr[right]){
        temp[index]=arr[left];
        index++,left++;

    }
    else{
        temp[index]=arr[right];
        index++,right++;
    }}
    while(left<=mid){
        temp[index]=arr[left];
        index++,left++;
    }
    while(right<=end){
         temp[index]=arr[right];
        index++,right++;
    }
    index=0;
    while(start<=end){
        arr[start]=temp[index];
        start++,index++;
    }

}
void mergesort(int arr[],int start,int end){
    if (start>=end){
        return;
    }
    int mid =start+(end-start)/2;
    mergesort(arr,start,mid); //left side 
    mergesort(arr,mid+1,end);//right side 
    merge(arr,mid,start,end);

}
int main(){
    int arr[]={2,4,1,3,6,9,5};
    mergesort(arr,0,6);
    for(int i =0;i<7;i++){
        cout<<arr[i];
    }
}