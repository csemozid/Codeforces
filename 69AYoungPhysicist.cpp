#include <iostream>
using namespace std;

int main() {
    int n, x[200], y[200], z[200], xTotal = 0, yTotal = 0, zTotal = 0;

    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x[i] >> y[i] >> z[i];
        //cout << "test" << endl;
        xTotal = xTotal + x[i];
        yTotal = yTotal + y[i];
        zTotal = zTotal + z[i];
    }
    
    if(xTotal == 0 && yTotal == 0 && zTotal == 0) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}