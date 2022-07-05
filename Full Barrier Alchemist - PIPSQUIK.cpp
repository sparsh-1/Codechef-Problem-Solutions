// https://www.codechef.com/INPRG01/problems/PIPSQUIK
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
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ll t;
    cin >> t;
    while (t--) {
        ll n, height, duck, jump, l, type, some, ans = 0;
        cin >> n >> height >> duck >> jump >> l;
        for (int i = 0; i < n; i++) {
            if (l) {
                cin >> type >> some;
                if (type == 1) {
                    if (height - duck <= some)
                        ans++;
                    else {
                        l--;
                        if (l)
                            ans++;
                    }
                }
                else {
                    if (jump >= some)
                        ans++;
                    else {
                        l--;
                        if (l)
                            ans++;
                    }
                }
            }
            else
                cin >> type >> some;
        }
        cout << ans << "\n";
    }

    return 0;
}