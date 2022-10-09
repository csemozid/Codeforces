#include <iostream>
using namespace std;

int main() {
    int num, countRoom = 0;
    cin >> num;
    int people[num], capacity[num];
    for(int i = 0; i < num; i++) {
        cin >> people[i] >> capacity[i];
        if(capacity[i] - people[i] >= 2) {
            countRoom++;
        }
        
    }
    cout << countRoom << endl;

    return 0;
}