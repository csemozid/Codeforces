#include <iostream>
using namespace std;

int main()
{
    int test, length, i, j, k, l, count = 1;
    cin >> test;
    
    long long arr[102];
    
    for (i = 0; i < test; i++)
    {
        cin >> length;
        for (j = 0; j < length; j++)
        {
            cin >> arr[j];
        }
        if (length == 1)
        {
            cout << "YES" << endl;
            count = 0;
            //break;
            // return 0;
        }
        //cout << "Hello";
        for (k = 0; k < length - 1; k++)
        {
            if (count == 0)
                break;
            for (l = k + 1; l < length; l++)
            {
                //cout << abs(arr[k] - arr[l]) << endl;
                if (abs(arr[k] - arr[l]) == 0)
                {
                    cout << "NO" << endl;
                    count = 0;
                    break;
                }
            }
        }
        if (count != 0)
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}