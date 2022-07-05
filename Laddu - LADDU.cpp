#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, laddu = 0, te;
        string ind, temp;
        cin >> n >> ind;
        while (n--) {
            cin >> temp;
            if (temp == "CONTEST_WON") {
                cin >> te;
                laddu += 300;
                if (te <= 20) {
                    laddu += 20 - te;
                }
            }
            else if (temp == "TOP_CONTRIBUTOR") {
                laddu += 300;
            }
            else if (temp == "BUG_FOUND") {
                cin >> te;
                laddu += te;
            }
            else if (temp == "CONTEST_HOSTED") {
                laddu += 50;
            }
        }
        if (ind == "INDIAN") {
            cout << laddu / 200 << endl;
        }
        else {
            cout << laddu / 400 << endl;
        }
    }
    return 0;
}
