#include <iostream>
#include <string.h>

using namespace std;

int main() {
    string word;
    cin >> word;
    if(word[0] >= 'a') {
        word[0] = word[0] - 32;
        //cout << word[0] << endl;
    }
    
    cout << word << endl;

    return 0; 
}