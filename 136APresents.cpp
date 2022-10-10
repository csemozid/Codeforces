#include <iostream>
using namespace std;

int main() {
    int n, val;
    cin >> n;
    int a[n+1];
    for(int i = 1; i <= n; i++) {
        cin >> val;
        a[val] = i;
    }

    for(int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}