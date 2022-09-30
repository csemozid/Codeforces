#include <iostream>
#include <string.h>

using namespace std;
//3+2+1
int main() {
    string math;
    char temp;
    cin >> math;
    int n = math.length();
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-i-1; j = j + 2) {
            if(math[j] > math[j+2]) {
                temp = math[j];
                math[j] = math[j+2];
                math[j+2] = temp;

            }
        }
    }



    cout << math << endl;



    return 0;
}