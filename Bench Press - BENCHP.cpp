// https://www.codechef.com/LTIME95B/problems/BENCHP
#include <bits/stdc++.h>

using namespace std;

#define fi          first
#define se          second
#define pb          push_back
#define mp          make_pair
#define all(x)      x.begin(), x.end()
#define ll          long long
#define pll         pair<long, long>
#define vll         vector<long long>
#define inf         1e18
#define gcd(a, b)   __gcd(a, b)
#define range(a,b)  substr(a,b-a+1)
#define fori(a, n)  for (ll i = a; i < n; i++)
#define forj(a, n)  for (ll j = a; j < n; j++)
#define fork(a, n)  for (ll k = a; k < n; k++)
#define print(x)    for (auto i : x) {cout << i << " ";}
#define FIO         ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

template <class T>
bool comp(T a, T b) {
    if (a < b)
        return true;
    return false;
}

int main()
{
    FIO;

    #ifndef ONLINE_JUDGE
    //remove this piece of code when this has to be submitted in kickstart, coding ninjas
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    //freopen is used to associate a file with stdin or stdout stream in C++
    #endif

    ll t;
    cin >> t;
    while (t--) {
        ll n, w, wr;
        cin >> n >> w >> wr;
        vll wei(n);
        fori(0, n)
            cin >> wei[i];
        sort(all(wei));
        ll i = 1, j, ans = wr;
        bool flag = false;
        while (i < n) {
            j = i;
            while(i < n && wei[i] == wei[i - 1])
                i++;
            if ((i - j + 1) > 1) {
                if ((i - j + 1) % 2 == 0)
                    ans += wei[j - 1] * (i - j + 1);
                else
                    ans += wei[j - 1] * (i - j);
            }
            if (i - j == 0)
                i++;
            if (ans >= w) {
                flag = true;
                break;
            }
        }
        if (flag || ans >= w)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}