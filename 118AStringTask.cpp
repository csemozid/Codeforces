#include <iostream>

using namespace std;

int main() {
    string str1, str2;
    int j = 0;
    cin >> str1;
    for(int i = 0; i < str1.length(); i++) {
        if(str1[i] < 97) {
            str1[i] = str1[i] + 32;
        }
        if(str1[i] != 'a' && str1[i] != 'e' && str1[i] != 'i' && str1[i] != 'o' && str1[i] != 'u' && str1[i] != 'y') {
            str2.append(".");
            str2.push_back(str1[i]);
        }
    }

    cout << str2<<endl;
    

    return 0;
}