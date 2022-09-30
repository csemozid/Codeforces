#include <iostream>

using namespace std;

int main() {
    long long int a, dollar, n, d, TotalCost, result;
    cin >> a >> dollar >> n;
    d = a;
    TotalCost = .5*n*(2*a+(n-1)*d);
    
    result = TotalCost - dollar;
    if((result) < 0) {
        result = 0;
    }
    cout << result << endl;

    return 0;
}