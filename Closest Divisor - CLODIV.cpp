// https://www.codechef.com/INPRG01/problems/CLODIV
#include <bits/stdc++.h>

#define fi          first
#define se          second
#define pb          push_back
#define mp          make_pair
#define ll          long long
#define pll         pair<long, long>
#define vll         vector<long long>
#define inf         1e18
#define range(a,b)	substr(a,b-a+1)
#define w(x)        int x; cin>>x; while(x--)
#define FIO         ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define for(n) for(int i = 0; i < n; i++)

using namespace std;

int main()
{
    FIO;

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ll a, b;
    cin >> a >> b;
    if (a % b == 0)
        cout << a << "\n";
    else {
        cout << (a / b) * b << "\n";
    }

    return 0;
}