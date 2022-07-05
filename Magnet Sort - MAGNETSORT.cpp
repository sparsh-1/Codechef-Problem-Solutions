// https://www.codechef.com/LTIME105B/problems/MAGNETSORT
/*

     ░██████╗██████╗░░█████╗░██████╗░░██████╗██╗░░██╗  ░██████╗░██╗░░░██╗██████╗░████████╗░█████╗░
     ██╔════╝██╔══██╗██╔══██╗██╔══██╗██╔════╝██║░░██║  ██╔════╝░██║░░░██║██╔══██╗╚══██╔══╝██╔══██╗
     ╚█████╗░██████╔╝███████║██████╔╝╚█████╗░███████║  ██║░░██╗░██║░░░██║██████╔╝░░░██║░░░███████║
     ░╚═══██╗██╔═══╝░██╔══██║██╔══██╗░╚═══██╗██╔══██║  ██║░░╚██╗██║░░░██║██╔═══╝░░░░██║░░░██╔══██║
     ██████╔╝██║░░░░░██║░░██║██║░░██║██████╔╝██║░░██║  ╚██████╔╝╚██████╔╝██║░░░░░░░░██║░░░██║░░██║
     ╚═════╝░╚═╝░░░░░╚═╝░░╚═╝╚═╝░░╚═╝╚═════╝░╚═╝░░╚═╝  ░╚═════╝░░╚═════╝░╚═╝░░░░░░░░╚═╝░░░╚═╝░░╚═╝
    ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░
    █████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗█████╗
    ╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝╚════╝
    ░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░

*/

#include <bits/stdc++.h>

using namespace std;

#define fi          first
#define se          second
#define pb          push_back
#define mp          make_pair
#define all(x)      x.begin(), x.end()
#define ll          long long
#define pll         pair<ll, ll>
#define vll         vector<long long>
#define vpll        vector<pll>
#define mll         map<ll, ll>
#define sz(x)       ((int) x.size())
#define inf         1e18
#define que_max     priority_queue<ll>
#define que_min     priority_queue <ll, vll, greater<ll>>
#define gcd(a, b)   __gcd(a, b)
#define range(a,b)  substr(a,b-a+1)
#define setbits(x)  __builtin_popcountll(x)
#define zrobits(x)  __builtin_ctzll(x)
#define fori(a, n)  for (ll i = a; i < n; i++)
#define forj(a, n)  for (ll j = a; j < n; j++)
#define fork(a, n)  for (ll k = a; k < n; k++)
#define print(x)    for (auto i : x) cout << i << " "; cout << "\n";
#define print1(x)   for (auto i : x) cout << i.fi << " " << i.se << "\n";
#define FIO         ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
mt19937             rng(chrono::steady_clock::now().time_since_epoch().count());

inline ll power(ll a, ll b)
{
    ll x = 1;
    while (b) {
        if (b & 1)
            x *= a;
        a *= a;
        b >>= 1;
    }
    return x;
}

template <class T>
bool comp(T a, T b) {
    if (a < b)
        return true;
    return false;
}

void solve() {
    ll n;
    cin >> n;
    vll arr(n), arr2(n);
    fori(0, n) {
        cin >> arr[i];
        arr2[i] = arr[i];
    }
    string s;
    cin >> s;
    bool flag = true;
    fori(0, n - 1) {
        if (arr[i] > arr[i + 1]) {
            flag = false;
            break;
        }
    }
    if (flag) {
        cout << 0 << "\n";
        return;
    }
    ll cnts = 0, cntn = 0;
    fori(0, n) {
        if (s[i] == 'S')
            cnts++;
        else
            cntn++;
    }
    if (cnts == 0 || cntn == 0) {
        cout << "-1\n";
        return;
    }
    if ((s[0] == 'N' && s.back() == 'S') || (s[0] == 'S' && s.back() == 'N')) {
        cout << "1\n";
        return;
    }
    sort(all(arr2));
    cnts = 0, cntn = 0;
    ll inds = 0, inde = n - 1, ecnts = 0, ecntn = 0;
    while (arr[inds] == arr2[inds]) {
        if (s[inds] == 'S')
            cnts++;
        else
            cntn++;
        inds++;
    }
    while (arr[inde] == arr2[inde]) {
        if (s[inde] == 'S')
            ecnts++;
        else
            ecntn++;
        inde--;
    }
    if (inds == 0) {
        if (s[inds] == 'S')
            cnts++;
        else
            cntn++;
    }
    if (inde == n - 1) {
        if (s[inde] == 'S')
            ecnts++;
        else
            ecntn++;
    }
    if ((cnts > 0 && ecntn > 0) || (cntn > 0 && ecnts > 0)) {
        cout << 1 << "\n";
        return;
    }
    if ((s[inde] == 'S' && cntn > 0) || (s[inde] == 'N' && cnts > 0) || (s[inds] == 'N' && ecnts > 0) || (s[inds] == 'S' && ecntn > 0) || (s[inds] == 'S' && s[inde] == 'N') || (s[inds] == 'N' && s[inde] == 'S')) {
        cout << 1 << "\n";
        return;
    }
    cout << 2 << "\n";
}

int32_t main()
{
    FIO;

    #ifndef ONLINE_JUDGE
    //remove this piece of code when this has to be submitted in kickstart, coding ninjas
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    //freopen is used to associate a file with stdin or stdout stream in C++
    #endif

    clock_t z = clock();

    ll t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    cerr << "Run Time: " << ((double)(clock() - z) / CLOCKS_PER_SEC) << "\n";

    return 0;
}

