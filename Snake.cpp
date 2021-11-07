#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "enter a number: ";
    cin >> n;
    for (int i = 0; i < n; i+=2) { 
        cout << "*";
        if (i != n-1)
            for (int j = 1; j < 2; j+=2) { 
                cout << "#";
            }
        else
            break;
    }
    return 0;
}