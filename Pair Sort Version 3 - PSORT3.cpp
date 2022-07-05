// https://www.codechef.com/UAPRAC/problems/PSORT3
// https://www.codechef.com/UASS001/problems/PSORT3

#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

bool sortbysec(const pair<long long, long long> &a, const pair<long long, long long> &b)
{
    if (a.second == b.second)
        return (a.first < b.first);
    return (a.second > b.second);
}

void solve(int n)
{
    vector <long long> a, b;
    vector <pair<long long, long long>> c;
    long long temp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        a.push_back(temp);
    }
    for (int i = 0; i < n; i++) {
        cin >> temp;
        b.push_back(temp);
    }
    for (int i = 0; i < n; i++) {
        c.push_back(make_pair(a[i], b[i]));
    }
    sort(c.begin(), c.end(), sortbysec);
    for (int i = 0; i < n; i++) {
        cout << c[i].first << " " << c[i].second << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    solve(n);
    return 0;
}
