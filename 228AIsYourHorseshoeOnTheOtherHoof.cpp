#include <iostream>
using namespace std;

int main() {
    unsigned long long a, b, c, d, count = 0;

    cin >> a >> b >> c >> d;
    if(a == b) count++;
    if(a == c) count++;
    if(a == d) count++;
    if(b == c) count++;
    if(b == d) count++;
    if(c == d) count++;

    if(count == 0) cout << 0 << endl;
    if(count == 1) cout << 1 << endl;
    if(count == 2) cout << 2 << endl;
    if(count == 3) cout << 2 << endl;
    if(count == 6) cout << 3 << endl;
     
    //cout << count;
    return 0;
}