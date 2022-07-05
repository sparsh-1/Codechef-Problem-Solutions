#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector <long long> arr;
    int n;
    cin >> n;
    long long temp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());
    long long ans = 0;
    for(int i = (n - 1); i >= 0; i--) {
        if ((arr[i] * (n - i)) > ans) {
            ans = arr[i] * (n - i);
        }
    }
    cout << ans;
    return 0;
}
