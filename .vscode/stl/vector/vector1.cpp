#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int n ;
    cin>>n;
    int x;
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
    
        v.push_back(x);
        for(int i = 0; i<v.size();i++){
            cout<<v[i]<<" ";
        }
    }
        // cin>>v[i];
        
    // for(int i = 0; i<v.size();i++){
    //         cout<<v[i];
    //     }
        return 0;
}
