// https://www.codechef.com/MARCH21B/problems/SPACEARR
#include <bits/stdc++.h>

#define fi          first
#define se          second
#define pb          push_back
#define mp          make_pair
#define ll          long long
#define pll         pair<long, long>
#define vll         vector<long long>
#define inf         1e18
#define range(a,b)  substr(a,b-a+1)
#define FIO         ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;

int main()
{
    FIO;

    #ifndef ONLINE_JUDGE
    //remove this piece of code when this has to be submitted in kickstart
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    //freopen is used to associate a file with stdin or stdout stream in C++
    #endif

    ll t;
    cin >> t;
    while (t--) {
        ll n, ans = 0, m = 0, flag = 1;
        cin >> n;
        vll arr(n), narr(n, 1);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            ans += arr[i];
            if (arr[i] > n) {
                cout << "Second\n";
                flag = 0;
                break;
            }
            else
                narr[arr[i] - 1]--;
        }
        if (flag && ans >= (n * (n + 1)) / 2) {
            cout << "Second\n";
            flag = 0;
        }
        if (flag) {
            for (int i = 0; i < n - 1; i++) {
                if (narr[i] == 1) {
                    flag = 0;
                    cout << "Second\n";
                    break;
                }
                else if (narr[i] < 0) {
                    narr[i + 1] -= -narr[i];
                }
            }
            if (flag) {
                if ((((n * (n + 1)) / 2) - ans) % 2 == 0)
                    cout << "Second\n";
                else
                    cout << "First\n";
            }
        }
    }
    return 0;
}