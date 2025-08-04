#include <iostream>
#include <vector>
#include <string>
using namespace std;

int counting;
vector<int> point;

vector<int> failure(string& s) {
    vector<int> f(s.size());
    int j = 0;
    for (int i = 1; i < s.size(); i++) {
        while (j > 0 && s[i] != s[j]) j = f[j - 1];
        if (s[i] == s[j]) f[i] = ++j;
    }
    return f;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string T, P;
    getline(cin, T);
    getline(cin, P);
    vector<int>f = failure(P);
    int j = 0;
    for (int i = 0; i < T.size(); i++) {
        while (j > 0 && T[i] != P[j]) j = f[j - 1];
        if (T[i] == P[j]) j++;
        if (j == P.size()) {
            counting++;
            point.push_back(i - P.size() + 2);
        }
    }
    cout << counting << '\n';
    for (int i = 0; i < point.size(); i++) {
        cout << point[i] << " ";
    }
    return 0;
}