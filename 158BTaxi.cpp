#include <iostream>
using namespace std;

int main() {
    long long n, total = 0, OneCount = 0, TwoCount = 0, ThreeCount = 0, FourCount = 0;
    int people;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> people;
        if(people == 1) OneCount++;
        if(people == 1) TwoCount++;
        if(people == 1) ThreeCount++;
        if(people == 1) FourCount++;
    }
    
    return 0;
}