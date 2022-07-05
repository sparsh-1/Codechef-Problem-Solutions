#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    long long n, ans = 0;
    while(t--) {
        ans = 0;
        cin >> n;
        int i = 1;
        while (1) {
            ans += n / pow(5, i);
            i++;
            if (n / pow(5, i) == 0) {
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
