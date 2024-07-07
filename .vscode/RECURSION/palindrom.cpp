#include<iostream>
using namespace std;
bool pali(string str,int start, int end){
    if (start>=end)
    return 1;
    if(str[start]!=str[end]){
        return 0;

    }
    else
    return pali(str,start+1,end-1);
}
int main(){
    string str ="amana";
 
    cout<<pali(str,0,4);
    
}