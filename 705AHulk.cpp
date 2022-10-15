#include<iostream>
using namespace std;

int main() {
    int n;
    string s1;
    cin >> n;
    if(n == 1) {
        s1 = "I hate";
    }
    else if(n%2 == 0) {
        for(int i = 0; i < n; i += 2) {
            s1 = s1 + " I hate";
            s1 = s1 + " that";
            s1 = s1 + " I love";
            if(n - i > 2) {
                s1 = s1 + " that";
            }
        }
    }
    //cout << "s1: " << s1 << endl;
    if(n%2 == 1 && n != 1) {
        for(int i = 0; n - i > 1; i += 2) {
            s1 = s1 + " I hate";
            s1 = s1 + " that";
            s1 = s1 + " I love";

            if(n - i > 2) {
                s1 = s1 + " that";
            }
        }
        s1 = s1 + " I hate";
    }


    cout << s1 + " it" << endl;


    return 0;
}