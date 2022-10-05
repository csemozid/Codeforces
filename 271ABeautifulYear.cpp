#include <iostream>
using namespace std;

int main() {
    int n, m, a, b, c, d, year, j, count = 0;
    int arr[20];
    cin >> m;
    m++;
    for (int i = 1; i < 8000; i++) {
        int arr[] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
        count = 0;
        n = m;
        m = m+1;

        //year = n;
        //cout << year << endl;
        while(n != 0) {
            j = n % 10;
            n = n/10;
            //cout <<"J: "<<j << endl;
            if(arr[j] == -1) {
                arr[j] = 1;
                count++;
                //cout << "Count: " << count << " For Year: " << m << endl;
            }
            else {
                break;
            }
        }
        if(count == 4) {
                cout << m-1 << endl;
                break;
        }
    }
        

    return 0;
}