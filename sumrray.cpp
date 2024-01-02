#include <iostream>
using namespace std;
int main()
{
    int a[3][3];
    int i, r;
    int c;
    for (i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
        cout << endl;
    }
    for (i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
    for (i = 0; i < 3; i++)
    {
        r=0;
        c=0;
        for (int j = 0; j < 3; j++)
        {
           r = r+a[i][j];
           c = c+a[j][i];
        }
        cout<<" "<<r<<" "<<c<<endl;
    }
    return 0;
}