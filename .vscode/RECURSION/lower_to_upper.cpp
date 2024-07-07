#include<iostream>
using namespace std;
  void upper(string &s,int index){
    if (index==-1){
        return ;
    }
    else {
        s[index] ='A'+s[index]-'a';
        upper(s,index-1);
            }
    
  }
int main (){
    string s="asdyei";
    upper(s,5);
    cout<<s;


}