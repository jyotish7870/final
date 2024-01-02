#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int arr[] = {6, 2, 8, 4, 10};

    for (int i = 0; i < n; i++)
    {
        int tem = arr[i];
        for(int j = i-1;j >= 0;j--){
            if(arr[j] > tem){
                arr[j+1]=arr[j];
                arr[j] = tem; 
            }
            else{
                break;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' '; 
    }
    cout << endl; 

    return 0; 
}