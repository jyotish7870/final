// #include<bits/stdc++.h>
// using namespace std;

//     int isprime(int n){
//     if (n<=1){
//         return 0;
//     }
//     for(int i =2;i<n;i++){
//         if (n %i==0){
//             return 0;
//         }
        
//     }
//     return 1;
//     }
//     int countprime(int n){

//     int count =0;
//     for(int i =2;i<n;i++){
//         if(isprime(i==1)){
//             count++;
//         }
//         return count;
        
//     }
// }
// int main (){
//     int n ;
//     cin>>n;
//     cout<<countprime(n);
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int countprime(int n){
    int count =0; 
    vector<bool> x(n+1,1);
    x[0]=x[1]= false;
    for(int i =2;i<n;i++){
        if(x[i]){

            count++;
            for(int j = i*i;j<n;j+=i){
                x[j]=false;
            }
        }
        
    }
    return count ;

    }
    int main (){
        int n ;
        cin >>n;
        int count ;
        // for (int i =2;i<n;i++){
            int totalptime = countprime(n);
            cout<<countprime(n)<<" "<<count;
              return 0;

        }
        
        
      
    
