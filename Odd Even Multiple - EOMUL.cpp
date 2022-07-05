// https://www.codechef.com/INPRG01/problems/EOMUL
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

    ll n;
    cin >> n;
    if (n % 3 != 0) 
        cout << -1 << "\n";
    else if (n % 6 == 0)
        cout << 0 << "\n";
    else
        cout << 1 << "\n";

    return 0;
}