// https://www.codechef.com/APRIL21C/problems/SDICE
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
    //remove this piece of code when this has to be submitted in kickstart, coding ninjas
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    //freopen is used to associate a file with stdin or stdout stream in C++
    #endif

    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        if (n == 1)
            cout << 20;
        else if (n == 2)
            cout << 36;
        else if (n == 3)
            cout << 51;
        else if (n == 4)
            cout << 60;
        else if (n % 4 == 0)
            cout << (21 * n) - (((1 * 4) + (2 * 4) + (3 * 4)) * (n / 4)) - (4 * 4) * ((n / 4) - 1);
        else if (n % 4 == 1)
            cout << (21 * n) - (((1 * 4) + (2 * 4) + (3 * 4)) * (n / 4)) - (4 * 4) * ((n / 4) - 1) - (4 * 1) - (1 * 1);
        else if (n % 4 == 2)
            cout << (21 * n) - (((1 * 4) + (2 * 4) + (3 * 4)) * (n / 4)) - (4 * 4) * ((n / 4) - 1) - (4 * 2) - (1 * 2) - (2 * 2);
        else if (n % 4 == 3)
            cout << (21 * n) - (((1 * 4) + (2 * 4) + (3 * 4)) * (n / 4)) - (4 * 4) * ((n / 4) - 1) - (4 * 3) - (1 * 3) - (2 * 3) - (3 * 1);
        cout << "\n";
    }

    return 0;
}