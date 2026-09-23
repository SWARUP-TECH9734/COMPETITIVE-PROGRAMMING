// Problem 6: Implement bitwise AND, OR and XOR.

#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two integers: ";
    cin >> a >> b;

    cout << "Bitwise AND = " << (a & b) << endl;
    cout << "Bitwise OR  = " << (a | b) << endl;
    cout << "Bitwise XOR = " << (a ^ b) << endl;

    return 0;
}
