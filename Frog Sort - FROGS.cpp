// https://www.codechef.com/FEB21B/problems/FROGS
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t, n, temp;
    cin >> t;
    while (t--) {
        cin >> n;
        vector <int> weight, jump, sw, ind, new_ind;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            weight.push_back(temp);
            ind.push_back(i);
        }
        for (int i = 0; i < n; i++) {
            cin >> temp;
            jump.push_back(temp);
        }
        sw = weight;
        sort(sw.begin(), sw.end());
        if (n == 2) {
            int ans = 0, ind;
            auto it = find(weight.begin(), weight.end(), sw[0]);
            ind = it - weight.begin();
            new_ind.push_back(ind);
            it = find(weight.begin(), weight.end(), sw[1]);
            ind = it - weight.begin();
            new_ind.push_back(ind);
            if (ind < new_ind[0]) {
                ans += 1;
                new_ind[1] += jump[ind];
                while (new_ind[1] <= new_ind[0]) {
                    ans += 1;
                    new_ind[1] += jump[ind];
                }
            }
            cout << ans << "\n";
        }
        else if (n == 3) {
            int ans = 0, ind;
            auto it = find(weight.begin(), weight.end(), sw[0]);
            ind = it - weight.begin();
            new_ind.push_back(ind);
            it = find(weight.begin(), weight.end(), sw[1]);
            ind = it - weight.begin();
            new_ind.push_back(ind);
            if (ind <= new_ind[0]) {
                ans += 1;
                new_ind[1] += jump[ind];
                while (new_ind[1] <= new_ind[0]) {
                    ans += 1;
                    new_ind[1] += jump[ind];
                }
            }
            it = find(weight.begin(), weight.end(), sw[2]);
            ind = it - weight.begin();
            new_ind.push_back(ind);
            if (ind <= new_ind[1]) {
                ans += 1;
                new_ind[2] += jump[ind];
                while (new_ind[2] <= new_ind[1]) {
                    ans += 1;
                    new_ind[2] += jump[ind];
                }
            }
            cout << ans << "\n";
        }
        else {
            int ans = 0, ind;
            auto it = find(weight.begin(), weight.end(), sw[0]);
            ind = it - weight.begin();
            new_ind.push_back(ind);
            it = find(weight.begin(), weight.end(), sw[1]);
            ind = it - weight.begin();
            new_ind.push_back(ind);
            if (ind <= new_ind[0]) {
                ans += 1;
                new_ind[1] += jump[ind];
                while (new_ind[1] <= new_ind[0]) {
                    ans += 1;
                    new_ind[1] += jump[ind];
                }
            }
            it = find(weight.begin(), weight.end(), sw[2]);
            ind = it - weight.begin();
            new_ind.push_back(ind);
            if (ind <= new_ind[1]) {
                ans += 1;
                new_ind[2] += jump[ind];
                while (new_ind[2] <= new_ind[1]) {
                    ans += 1;
                    new_ind[2] += jump[ind];
                }
            }
            it = find(weight.begin(), weight.end(), sw[3]);
            ind = it - weight.begin();
            new_ind.push_back(ind);
            if (ind <= new_ind[2]) {
                ans += 1;
                new_ind[3] += jump[ind];
                while (new_ind[3] <= new_ind[2]) {
                    ans += 1;
                    new_ind[3] += jump[ind];
                }
            }
            cout << ans << "\n";
        }
    }
    return 0;
}
