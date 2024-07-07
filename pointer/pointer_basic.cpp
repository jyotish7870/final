#include<iostream>
// using namespace std;
// int main(){
//     int a = 10,b = 5;
//     int *p,*q;
//     p = &a;
//     q = &b;
//     cout<<a<<endl;
//     cout<<p<<endl;
//     cout<<&a<<endl;
//     cout<<*p<<endl;
// return 0;
    
    
//     }

using namespace std;
// void sw(int &p1,int &p2){
//     int t =p1;
//     p1=p2;
//     p2 =t;
//     cout << &p1;
// }
// int main(){
//     int f=10;
//     int s =20;
//     sw(f,s);
//     cout<<f<<s<<endl;
//     cout<<&f<<endl;
    
// }
void r(int **p1){
     *p1=*p1+1;
     cout<<p1<<endl;
    
}
int main (){
    int a = 10;
    int *p =&a;
    int **ptr=&p;
     r(ptr);
cout<<*ptr;

     

    

}