// https://www.codechef.com/INPRG01/problems/SNAKPROC
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
        vector <int> ans = {};
        ll l;
        string yup;
        bool flag = true;
        cin >> l;
        cin >> yup;
        for (int i = 0; i < l; i++) {
            if (yup[i] == 'H') {
                if (ans.size() >= 1) {
                    flag = false;
                    break;
                }
                else 
                    ans.pb(1);
            }
            else if (yup[i] == 'T') {
                if (ans.size() == 0) {
                    flag = false;
                    break;
                }
                else
                    ans.pop_back();
            }
        }
        if (flag && ans.size() == 0)
            cout << "Valid\n";
        else
            cout << "Invalid\n";
    }

    return 0;
}