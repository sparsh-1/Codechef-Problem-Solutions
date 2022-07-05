#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    vector <int> val = {98, 57, 31, 45, 46};
    while (t--) {
        string s;
        cin >> s;
        for (int i = 0; i < s.size(); i++) {
            cout << (char)((((int)(s[i] - 'A') + val[i]) % 26) + 65);
        }
        cout << "\n";
    }
    return 0;
}
