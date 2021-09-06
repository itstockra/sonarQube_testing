#include <iostream>

using namespace std;
const int SIZE = 10;

int main() {
    int[SIZE] a;
    int[SIZE] b;
    int c[SIZE];

    for (int i = 0; i < SIZE; i++) {
        a[i] = i * 3;
        b[i] = i + 2 * 6;
    }

    cout << "Here's some numbers: " << endl;
    cout << "Array A = [";
    for (int i = 0; i < SIZE; i++) {
        if (i == SIZE - 1) {
            cout << a[i] << "]" << endl;
        }
        else {
            cout << a[i] << ", ";
        }
    }

    
    


    return 0;
}