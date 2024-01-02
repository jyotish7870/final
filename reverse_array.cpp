#include <iostream>
using namespace std;
int main()
{
    int s = 0;
    int n = 8;
    int e = n - 1;
    int i;

    int arr[8] = {2, 3, 4, 5, 6, 7, 8, 9};
    while (s <= e)
    {
        
            swap(arr[s], arr[e]);

            s++;
            e--;}
        
        for (int i = 0; i <= 8; i++)
        {
            cout << arr[i];
        }
        return 0;
    }
