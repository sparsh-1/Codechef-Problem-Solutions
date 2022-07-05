#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int g;
        cin >> g;
        while (g--) {
            int i, q;
            long long n;
            cin >> i >> n >> q;
            if (i == 1) {
                if (q == 1) {
                    cout << n / 2;
                }
                else {
                    if ((n % 2) == 0) {
                        cout << n / 2;
                    }
                    else {
                        cout << (n / 2) + 1;
                    }
                }
            }
            else {
                if (q == 1) {
                    if ((n % 2) == 0) {
                        cout << n / 2;
                    }
                    else {
                        cout << (n / 2) + 1;
                    }
                }
                else {
                    cout << n / 2;
                }
            }
            cout << endl;
        }
    }
    return 0;
}
