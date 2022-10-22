#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        arr[i] = 0;
    }

    // for(int i = 0; i < n; i++) {
    //     cout << arr[i];
    // }

//4
// 3 1 2 3
// 2 2 3

    int p, q, val;
    cin >> p;
    for(int j = 0; j < p; j++) {
        cin >> val;
        arr[val-1] = 1;
    }
    cin >> q;
    for(int j = 0; j < q; j++) {
        cin >> val;
        arr[val-1] = 1;
    }

    for(int k = 0; k < n; k++) {
        if(arr[k] == 0) {
            cout << "Oh, my keyboard!" << endl;
            return 0;
        }
    }
    cout << "I become the guy." << endl;
    return 0;
}