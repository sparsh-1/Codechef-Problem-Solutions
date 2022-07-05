// https://www.codechef.com/problems/CLETAB
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
        ll n, m;
        cin >> n >> m;
        vll arr(m), tables(n, 0);
        fori(0, m)
            cin >> arr[i];
        set <ll> aalu(all(arr));
        ll ans = 0, i = 0;
        while (ans < min(n, m) && i < m) {
            if (count(all(tables), arr[i]) > 0) {
                i++;
                continue;
            }
            if (count(all(tables), 0) > 0) {
                forj(0, n) {
                    if (tables[j] == 0) {
                        tables[j] = arr[i];
                        ans++;
                        i++;
                        break;
                    }
                }
            }
            else
                break;
        }
        if (i == m) {
            cout << ans << "\n";
            continue;
        }
        while (i < m) {
            if (count(all(tables), arr[i]) > 0) {
                i++;
                continue;
            }
            bool flag = false;
            forj(0, n) {
                if (count(arr.begin() + i, arr.end(), tables[j]) > 0)
                    continue;
                else {
                    tables[j] = arr[i];
                    i++;
                    ans++;
                    flag = true;
                    break;
                }
            }
            if (flag)
                continue;
            else {
                vll baithe;
                forj(i, m) {
                    if (count(all(tables), arr[j]) > 0)
                        if (count(all(baithe), arr[j]) == 0)
                            baithe.pb(arr[j]);
                    if (baithe.size() == (n - 1))
                        break;
                }
                forj(0, n) {
                    if (count(all(baithe), tables[j]) > 0)
                        continue;
                    else {
                        tables[j] = arr[i];
                        break;
                    }
                }
                i++;
                ans++;
            }
        }
        if (aalu.size() > ans)
            cout << aalu.size() << "\n";
        else
            cout << ans << "\n";
    }
    return 0;
}