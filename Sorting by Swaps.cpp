// https://www.codechef.com/SSWK01/problems/SSWK01A
// It is a simple counting the number of inversions problem
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t, n;
    long long temp;
    cin >> t;
    while (t--) {
        cin >> n;
        vector <long long> arr;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            arr.push_back(temp);
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] > arr[j]) {
                    ans++;
                }
                else {
                    continue;
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
