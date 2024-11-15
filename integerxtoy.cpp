#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "input x: ";
    cin >> x;
    cout << "input y: ";
    cin >> y;
    for (int i = x; i <= y; i++) {
        cout << i << " ";
    }
    return 0;
}