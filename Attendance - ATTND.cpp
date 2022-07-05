// https://www.codechef.com/UAACC01/problems/ATTND
// https://www.codechef.com/problems/ATTND
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

    ll t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        string temp1, temp2;
        vector <string> arr1(n);
        vector <string> arr2(n);
        for (ll i = 0; i < n; i++) {
            cin >> temp1 >> temp2;
            arr1[i] = temp1;
            arr2[i] = temp2;
        }
        for (ll i = 0; i < n; i++) {
            if (count(arr1.begin(), arr1.end(), arr1[i]) > 1)
                cout << arr1[i] << " " << arr2[i]<< "\n";
            else 
                cout << arr1[i] << "\n";
        }
    }

    return 0;
}