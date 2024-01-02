#include<iostream>
using namespace std;
int fabb(int n ){
    if(n ==0)
        return 0;
        if(n ==1)
        return 1;
    

    return fabb (n-1)+fabb(n-2);
}

    int main(){
        int n ;
        cin >>n;
       int ans =  fabb(n);
        cout<<ans;
        return 0;

    }
