#include <iostream>
using namespace std;
void EvenOdd(long long n, long long k) {
    if(n % 2 == 0) {
        n = n/2;
        if(k <= n) cout << (2*(k-1) + 1) << endl;
        else cout << 2*(k-n-1)+2 << endl;

    }
    else {
        n = n/2;
        if(k <= n+1) cout << (2*(k-1) + 1) << endl;
        else cout << 2*(k-n-2)+2 << endl;
    }
}
int main() {
    long long num, key;
    cin >> num >> key;
    EvenOdd(num, key);
    return 0;
} 