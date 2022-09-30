#include <iostream>
using namespace std;
int main() {
    unsigned long long int n, m, a, p, q;
    cin >> n >> m >> a;
    p = n/a;
    if(n % a != 0) {
        p++;
    }
    q = m/a;
    if(m % a != 0) {
        q++;
    }
    cout << p*q << endl;
    return 0;
}