// https://www.codechef.com/FEB21B/problems/TEAMNAME
#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string temp;
        unordered_map <string, vector<int>> win;
        vector <vector <string>> narr(26);
        for (int i = 0; i < n; i++) {
            cin >> temp;
            narr[temp[0] - 'a'].push_back(temp);
            win[temp.substr(1, temp.size() - 1)].push_back(temp[0] - 'a');
        }
        long long ans = 0;
        for (auto it = win.begin(); it != win.end(); it++) {
            for (int i = 0; i < it->second.size(); i++) {
                for (auto itr = next(it, 1); itr != win.end(); itr++) {
                    if (find(itr->second.begin(), itr->second.end() ,it->second[i]) == itr->second.end()) {
                        for (int j = 0; j < itr->second.size(); j++) {
                            if (find(it->second.begin(), it->second.end() ,itr->second[j]) == it->second.end()) {
                                ans += 2;
                            }
                        }
                    }
                    else {
                        continue;
                    }
                }
            }
        }
        cout << ans << "\n";
    }
    return 0;
}
