#include <iostream>
using namespace std;
int main() {
    int value1, value2;
    int * valuePtr;
    valuePtr = &value1;
    *valuePtr = 10;
    valuePtr = &value2;
    *valuePtr = 20;
    cout << "value1 is " << value1 << '\n';
    cout << "value2 is " << value2 << '\n';
    return 0;
}