#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int arr[] = {6, 2, 8, 4, 10};

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
        
        
    }
    for (int i = 0; i < 5; i++)
        {
            cout << arr[i];
        }
    return 0;
}