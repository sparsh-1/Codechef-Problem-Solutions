// https://www.codechef.com/FEB21B/problems/PRIGAME
#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

vector <int> arr(1000001);

void SieveOfEratosthenes(int n = 1000000)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++) {
        arr[p] += arr[p - 1] + prime[p];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, x, y;
    cin >> t;
    SieveOfEratosthenes();
    while (t--) {
        cin >> x >> y;
        if (arr[x] > y) {
            cout << "Divyam\n";
        }
        else {
            cout << "Chef\n";
        }
    }
    return 0;
}
