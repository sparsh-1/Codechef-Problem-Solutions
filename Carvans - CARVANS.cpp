#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    while (t--) {
        vector <int> arr;
        cin >> n;
        int ans = 1;
        int temp;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            arr.push_back(temp);
        }
        for (int i = 1; i < n; i++) {
            if (arr[i] < arr[i - 1]) {
                ans++;
            }
            else {
                arr[i] = arr[i - 1];
            }
        }
        cout << ans << endl;
    }
    return 0;
}
