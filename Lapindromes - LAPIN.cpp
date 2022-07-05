#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string a;
    while (n--) {
        cin >> a;
        map<char, int> a1;
        map<char, int> a2;
        map<char, int> :: iterator it1;
        map<char, int> :: iterator it2;
        if ((a.size() % 2) == 0) {
            for (int i = 0; i < a.size() / 2; i++) {
                a1[a[i]]++;
            }
            for (int i = a.size() / 2; i < a.size(); i++) {
                a2[a[i]]++;
            }
        }
        else {
            for (int i = 0; i < a.size() / 2; i++) {
                a1[a[i]]++;
            }
            for (int i = (a.size() / 2) + 1; i < a.size(); i++) {
                a2[a[i]]++;
            }
        }
        int flag = 1;
        for (it1 = a1.begin(), it2 = a2.begin(); it1 != a1.end(), it2 != a2.end(); it1++, it2++) {
            if (((it1 -> first) == (it2 -> first)) && ((it1 -> second) == (it2 -> second))) {
                continue;
            }
            else {
                flag = 0;
                cout << "NO" << endl;
                break;
            }
        }
        if (flag) {
            cout << "YES" << endl;
        }
    }
    return 0;
}
