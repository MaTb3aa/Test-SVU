#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    bool flip = 1;
    int sereja = 0, dema = 0, L = 0, R = n - 1;
    while (L <= R) {
        if (arr[L] > arr[R]) {
            if (flip) {
                sereja += arr[L];
            } else {
                dema += arr[L];
            }
            ++L;
        } else {
            if (flip) {
                sereja += arr[R];
            } else {
                dema += arr[R];
            }
            --R;
        }

        flip = !flip;
    }

    cout << sereja << " " << dema << endl;

    return 0;
}
