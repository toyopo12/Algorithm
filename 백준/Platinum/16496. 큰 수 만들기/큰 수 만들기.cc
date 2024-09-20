#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int check;
string s[1001];

bool cmp(string a, string b){
    return a + b > b + a;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s[i];
        if(s[i] == "0") check++;
    }
    sort(s, s + n, cmp);
    if(check == n) cout << "0";
    else for(int i = 0; i < n; i++) cout << s[i];
    return 0;
}