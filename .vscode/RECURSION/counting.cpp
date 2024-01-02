#include<iostream>
using namespace std;
int count(int n ){
    if(n ==0)
        return 0;
    //print n to 1
    // cout <<n;
    // count(n-1);


    //print 1 to n;
   count (n-1);
   cout<<n;
}
    int main(){
        int n;
        cin>>n;
        count(n);
    
     return 0;
    }