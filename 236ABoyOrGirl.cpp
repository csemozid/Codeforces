#include <iostream>

using namespace std;

int main() {
    string name;
    int arr[200];
    cin >> name;
    int nameLen = name.length();

    for(int i= 0; i<200; i++) {
        arr[i] = 0;
    }
    int count = 0;
    for(int i = 0; i < nameLen; i++) {
        if(arr[name[i]] != 1) {
           arr[name[i]] = 1;
           count++; 
        }
    }
    //cout << arr[name[0]] << endl;
    if(count % 2 == 0) {
        cout << "CHAT WITH HER!" << endl;
    }
    else {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}