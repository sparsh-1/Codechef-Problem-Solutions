// https://www.codechef.com/FEB21B/problems/MAXFUN
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        long long temp;
        vector <long long> arr;
        for(int i = 0; i < n; i++) {
            cin >> temp;
            arr.push_back(temp);
        }
        sort(arr.begin(), arr.end());
        cout << (arr[n - 1] - arr[n - 2]) + (arr[n - 1] - arr[0]) + (arr[n - 2] - arr[0]) << "\n";
    }
    return 0;
}
