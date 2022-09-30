#include <iostream>


using namespace std;
int main() {
    int mat[5][5], value, locI, locJ, operation = 0;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> value;
            mat[i][j] = value;
            if (value == 1) {
                locI = i;
                locJ = j;
            }
        }
    }
    operation = abs(2-locI) + abs(2-locJ);
    cout << operation << endl;

    return 0;
}

