#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main() {
    long long int n, sum = 0, sn1, sn2, m;
    long long a;
    //cout << sizeof(a);
    //cout << INT_MAX;
    cin >> n;
    if(n % 2 == 0) {
        n = n/2;
        sn1 = n*(n+1);
        sn2 = -(n*n);
        cout << sn1 + sn2 << endl;
        //sn2 = pow(n-1,2);
    }
    else {
        n = n/2;
        m = n + 1;
        sn1 = -(m*m);
        sn2 = n*(n+1);
        cout << sn1 + sn2 << endl;
    }

    return 0;
}