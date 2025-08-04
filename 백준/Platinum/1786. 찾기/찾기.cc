#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<int> failure(string& s) {
    vector<int> f(s.size());
    for (int i = 1, j = 0; i < s.size(); i++) {
        while (j && s[i] != s[j]) j = f[j - 1];
        if (s[i] == s[j]) f[i] = ++j;
    }
    return f;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> point;
    string T, P;
    getline(cin, T);
    getline(cin, P);
    vector<int>f = failure(P);
    for (int i = 0, j = 0; i < T.size(); i++) {
        while (j && T[i] != P[j]) j = f[j - 1];
        if (T[i] == P[j]) j++;
        if (j == P.size()) {
            point.push_back(i - j + 2);
        }
    }
    cout << point.size() << '\n';
    for (auto&i : point) cout << i << " ";
    return 0;
}