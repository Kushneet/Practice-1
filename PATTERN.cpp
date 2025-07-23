#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;  // number of rows

    int i = 1;
    while (i <= n) {
        // Increasing numbers from 1 to n - i + 1
        int inc = 1;
        while (inc <= n - i + 1) {
            cout << inc;
            inc++;
        }

        // Stars: 2 * (i - 1)
        int stars = 1;
        while (stars <= 2 * (i - 1)) {
            cout << "*";
            stars++;
        }

        // Decreasing numbers from n - i + 1 to 1
        int dec = n - i + 1;
        while (dec >= 1) {
            cout << dec;
            dec--;
        }

        cout << endl;
        i++;
    }

    return 0;
}
