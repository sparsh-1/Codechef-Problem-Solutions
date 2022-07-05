// https://www.codechef.com/UASS001/problems/SUBS
#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

using namespace std;

long long solve()
{
    int n, k;
    cin >> n >> k;
    vector <long long> arr;
    long long temp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());
    long long ans = 10e9;
    for (int i = 0; i < n - k + 1; i++) {
        if (abs(arr[i] - arr[i + k - 1]) < ans) {
            ans = abs(arr[i] - arr[i + k - 1]);
        }
    }
    return ans;
}

int main()
{
    cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n";
    }
    return 0;
}
