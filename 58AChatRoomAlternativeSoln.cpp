#include <iostream>
using namespace std;

int main() {
    string s1 = "hello", s2;
    cin >> s2;
    int k = 0;
    for(int i = 0; i < s2.length(); i++) {
        if(s1[k] == s2[i]) {
            k++;
        }
    }
    if(k == s1.length()) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}