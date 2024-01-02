//addition of two matrix
#include<iostream>
using namespace std;
int main(){
    int i ,j;
    int sum;
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int b[3][3]= {{3,2,1},{6,5,4},{9,8,10}};
    for(i = 0;i<3;i++){
        
        for(j=0;j<3;j++){
            sum = 0;
            sum = sum +a[i][j]+b[i][j];
             cout<<sum<<" ";
        }
        cout<<endl;
       
    }
return 0;
}