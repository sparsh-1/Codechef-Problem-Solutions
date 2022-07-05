// https://www.codechef.com/STRG2020/problems/REMIX
#include <sstream>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector <string> arr;
    string temp, word, sstr;
    getline(cin, temp);
    istringstream s(temp);
    int small = 10000000;
    while (s >> word) {
        arr.push_back(word);
        if (word.size() < small) {
            sstr = word;
            small = word.size();
        }
    }
    cout << sstr << " ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " " << sstr << " ";
    }
    return 0;
}
