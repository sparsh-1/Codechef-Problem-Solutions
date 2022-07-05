// https://www.codechef.com/INPRG01/problems/PRPRME
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

void sieve(ll n, ll lim) 
{
    vector <int> arr(n, 1);
    for(int i = 2; i < n; i++) 
        if (arr[i] == 1)
            for (int j = i * i; j < n; j+=i)
                arr[j] = 0;
    ll i = 2, tot = 0;
    while (tot < lim) {
        if (arr[i] == 1) {
            cout << i << " ";
            tot++;
        }
        i++;
    }
}

int main()
{
    FIO;

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    ll n;
    cin >> n;
    sieve(8000, n);

    return 0;
}