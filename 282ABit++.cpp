#include <iostream>

using namespace std;

int main() {
    int n, X = 0, positiveCount = 0, negativeCount = 0;
    string operation;
    cin >> n;

    for(int i =0; i < n; i++) {
        cin >> operation;

        if(operation == "++X" || operation == "X++") {
            positiveCount++;
        }
        else {
            negativeCount++;
        }
    }
    
    cout << positiveCount - negativeCount << endl;


    return 0;
}