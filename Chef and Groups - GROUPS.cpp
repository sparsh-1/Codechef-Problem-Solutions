// https://www.codechef.com/MARCH21B/problems/GROUPS
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
        string s;
        cin >> s;
        int ans = 0;
        int i = 0, k = s.size() - 1;
        while (i < s.size() && s[i] == '0')
            i++;
        while (i >= 0 && s[k] == '0')
            k--;
        if (i == s.size())
            cout << 0 << "\n";
        else {
            for (int j = i; j <= k; j++) {
                if (s[j] == '0' && j != 0 && s[j - 1] != '0')
                    ans++;
            }
            cout << ans + 1 << "\n";
        }
    }

    return 0;
}