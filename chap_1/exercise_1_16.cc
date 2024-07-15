#include <iostream>

using namespace std;
int main () {
    cout << "Please input numbers to sum up:" << endl;
    int sum = 0, var = 0;
    while (cin >> var) {
        sum += var;
    }
    cout << "The sum is " << sum << endl;
    return 0;
}
