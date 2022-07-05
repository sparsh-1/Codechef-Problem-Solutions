// https://www.codechef.com/COOK127C/problems/WEIGHTBL
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
        ll w1, w2, x1, x2, M;
        cin >> w1 >> w2 >> x1 >> x2 >> M;
        if ((w2 - w1) >= (x1) * M && (w2 - w1) <= (x2) * M)
            cout << 1 << "\n";
        else 
            cout << 0 << "\n";
    }

    return 0;
}