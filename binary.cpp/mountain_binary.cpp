#include <iostream>
using namespace std;
int main()
{
    int arr[] = {0,1,0};
    int start = 0;
    int n = 2;
    int end = n - 1;
    int mid = (start + end) / 2;

    while (start < end)
    {

        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }

        else
        {
            end = mid;
        }
        mid = (start + end) / 2;
    }
    return start;
}
