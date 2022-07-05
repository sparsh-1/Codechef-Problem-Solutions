// https://www.codechef.com/UAPRAC/problems/SSWK02A
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    long long temp;
    while (t--) {
        vector <long long> arr;
        long long ans = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            arr.push_back(temp);
        }
        sort(arr.begin(), arr.end());
        long long mid = arr[n / 2];
        for (int i = 0; i < n; i++) {
            ans += abs(arr[i] - mid);
        }
        cout << ans << "\n";
    }
    return 0;
}
