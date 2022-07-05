// https://www.codechef.com/problems/KNPSK
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
    if (((float)a.second / (float)a.first) > ((float)b.second / (float)b.first))
        return true;
    else if (((float)a.second / (float)a.first) == ((float)b.second / (float)b.first))
        return a.second > b.second;
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

    ll n, weight = 0, x, y;
    cin >> n;
    vector<vll> arr(3);
    fori(0, n) {
        cin >> x >> y;
        weight += x;
        arr[x].pb(y);
    }
    sort(all(arr[1]), greater<ll>());
    sort(all(arr[2]), greater<ll>());
    ll ptr0 = 0, ptr1 = 0;
    ll ans[2 * (100007)];
    for (ll i = 2; i <= weight; i += 2) {
        ll v0 = 0, v1 = 0;
        for (ll pos = ptr0; pos < arr[1].size() && pos < (ptr0 + 2); pos++)
            v0 += arr[1][pos];
        for (ll pos = ptr1; pos < arr[2].size() && pos < (ptr1 + 1); pos++)
            v1 += arr[2][pos];
        ans[i] = ans[i - 2] + max(v0, v1);
        if (v0 >= v1)
            ptr0 += 2;
        else
            ptr1 += 1;
    }
    ptr0 = 0;
    ptr1 = 0;
    if (ptr0 < arr[1].size())
        ans[1] = arr[1][ptr0++];
    for (ll i = 3; i <= weight; i += 2) {
        ll v0 = 0, v1 = 0;
        for (ll pos = ptr0; pos < arr[1].size() && pos < (ptr0 + 2); pos++)
            v0 += arr[1][pos];
        for (ll pos = ptr1; pos < arr[2].size() && pos < (ptr1 + 1); pos++)
            v1 += arr[2][pos];
        ans[i] = ans[i - 2] + max(v0, v1);
        if (v0 >= v1)
            ptr0 += 2;
        else
            ptr1 += 1;
    }
    for (ll i = 1; i <= weight; i++) {
        cout << ans[i] << " ";
    }
    return 0;
}