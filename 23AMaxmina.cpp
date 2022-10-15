#include <iostream>
using namespace std;

int main() {
    int t, n, k;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> n >> k;
        int a[n], flag = 0;
        for(int j = 0; j < n; j++) {
            //cout << "Hello" << endl;
            cin >> a[j];
            if(a[j] == 1) {
                flag = 1;
            }
        }
        if(flag == 1) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }

    }

    return 0;
}