#include <iostream>
#include <string>

using namespace std;

int ct[30];
int arr[200020][30];

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cin.tie(nullptr);
    string s;
    int q;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        ct[s[i] - 'a']++;
        for(int j = 0; j < 30; j++) arr[i + 1][j] = ct[j];
    }
    cin >> q;
    while(q--){
        char x;
        int l, r;
        cin >> x >> l >> r;
        cout << arr[r + 1][x - 'a'] - arr[l][x - 'a'] << '\n';
    }
    return 0;
}