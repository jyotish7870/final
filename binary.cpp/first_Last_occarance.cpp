#include <iostream>
using namespace std;
int first_occarrance(int arr[], int size, int key)
{
    int start = 0;
    int n = 8;
    int end = n - 1;
    int mid = (start+end)/2;
    int ans = -1;
    

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid ;
            end = mid -1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start+end)/2;
    }
    return ans;
}
int last_occarrance(int arr[], int size, int key)
{
    int start = 0;
    int n = 8;
    int end = n - 1;
    int mid = (start+end)/2;
    int ans = -1;
    

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid ;
           start = mid +1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start+end)/2;
    }
    return ans;}
int main()
{
    int even[] = {2, 3, 3, 3, 4, 4, 5, 6};
    int index = first_occarrance(even, 8, 4);
     int index2 = last_occarrance(even, 8, 3);
    cout << "first occarrance of 4"<<" "<<index<<endl;
    cout << "last occarrance of 3"<<" "<<index2;
    

    return 0;
}