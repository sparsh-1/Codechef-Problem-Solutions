// https://www.codechef.com/UASS001/problems/SSWK01E --> Unacademy only
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
        ll n, q, k, l, r, x, ans = 0;
        cin >> n >> q >> k;
        vll arr(n), sen;
        fori(0, n) {
            cin >> arr[i];
            ans += arr[i];
        }
        fori(0, q) {
            cin >> l >> r >> x;
            if (x > 0)
                sen.pb((r - l + 1) * x);
        }
        sort(all(sen), greater<ll>());
        ll i = 0;
        while (i < k && i < sen.size()) {
            ans = max(ans, ans + sen[i++]);
        }
        cout << ans << "\n";
    }

    return 0;
}