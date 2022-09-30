#include <iostream> 

using namespace std;

int main() {
    int n, Petya, Vasya, Tonya, count = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> Petya >> Vasya >> Tonya;
        if((Petya + Vasya + Tonya) == 2 || (Petya + Vasya + Tonya) == 3 ) {
            count++;
        }
    }
    cout << count << endl;



    return 0;
}
