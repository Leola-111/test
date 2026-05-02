#include <iostream>
using namespace std;
int main() {
    int a = 5;
    int b = 10;
    for(int i = 0; i < 5; i++) {
        cout << "Iteration " << i << ": a = " << a << ", b = " << b << endl;
        a += 1;
        b += 2;
    }
    return 0;
}