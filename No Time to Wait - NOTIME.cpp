// https://www.codechef.com/MARCH21B/problems/NOTIME
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

    ll n, h, x;
    cin >> n >> h >> x;
    vll arr(n);
    bool flag = false;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] + x >= h) {
            cout << "YES\n";
            flag = true;
            break;
        }
    }
    if (!flag)
        cout << "NO\n";

    return 0;
}