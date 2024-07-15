#include <iostream>

using namespace std;

int main () {
    int var1, var2;
    cout << "Please input one integer: ";
    cin >> var1;
    cout << "Please input another integer: ";
    cin >> var2;

    if (var1 > var2) {
        int temp = var2;
        var2 = var1;
        var1 = temp;
    }

    while (var1 <= var2) {
        cout << var1++ <<endl;
    }

    return 0;
}
