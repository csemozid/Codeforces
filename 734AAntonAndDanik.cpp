#include <iostream>
using namespace std;

int main() {
    long int n, Anton = 0, Danik = 0, len;
    string results;
    cin >> n >> results;
    len = results.size();
    for(int i = 0; i < len; i++) {
        if (results[i] == 'A') {
            Anton++;
        }    
    }
    Danik = len - Anton;
    //cout << Anton << " " << Danik << endl;
    if(Anton > Danik)
        cout << "Anton" << endl;
    else if(Danik > Anton) {
        cout << "Danik" << endl;
    }   
    else {
        cout << "Friendship" << endl;
    }


    return 0;
}