#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 8;
    int arr[] = {1,2,3,4,5,1,2,3};
    

    for (int i = 0; i < n - 1; i++)
    {
        int minindex = i;
        for (int j = i+1; j < n; j++)
        {
            if (arr[minindex] > arr[j])
            {
               minindex=j;     
            }
               
            
        }
        swap(arr[minindex], arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }

    return 0;
}