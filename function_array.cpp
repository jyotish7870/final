#include <iostream>
using namespace std;

  int avg(int marks , int size){
    int sum = 0;
    int avarage = 0;
    int i ;
    for (int i = 0; i <size ; i++){
        sum = sum +marks[i];
        avarage = sum/size;
        cout<<sum<<" "<<avarage;

        
    } 
  }
    
    void main(){
        int a[5]= {2,3,4,5,6} ,marks,size ;
        int avarage = avg(marks);
        
        

    }

