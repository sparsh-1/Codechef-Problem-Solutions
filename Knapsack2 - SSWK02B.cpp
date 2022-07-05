// https://www.codechef.com/UAPRAC/problems/SSWK02B
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int t, n;
    long long x, temp;
    cin >> t;
    while (t--) {
        vector <long long> arr;
        cin >> n >> x;
        for(int i = 0; i < n; i++) {
            cin >> temp;
            arr.push_back(temp);
        }
        sort(arr.begin(), arr.end());
        int ans = 0, a = 0, b = n - 1;
        while (a <= b) {
            if (arr[b] + arr[a] <= x) {
                b--;
                a++;
                ans++;
            }
            else {
                b--;
                ans++;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
