#include <iostream>

using namespace std;

long long smax[88];

void re(int n, long long index)
{
    if(index == 1) cout << "(";
    else if(index == smax[n]) cout << ")";
    else{
        if(index > 1 + smax[n - 2]) re(n - 1, index - 1 - smax[n - 2]);
        else re(n - 2, index - 1);
    }
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cin.tie(nullptr);
    int t;
    cin >> t;
    smax[1] = 2;
    smax[2] = 2;
    for(int i = 3; i <= 86; i++) smax[i] = smax[i - 1] + smax[i - 2] + 2;
    while(t--){
        long long n, k;
        cin >> n >> k;
        if(n > 86){ // 이게문제임
            if(n % 2 == 1){
                if(k > (n - 85) / 2) re(85, k - (n - 85) / 2);
                else cout << "(";
            }
            else{
                if(k > (n - 86) / 2) re(86, k - (n - 86) / 2);
                else cout << "(";
            }
        }
        else if(k > smax[n]) cout << "0";
        else re(n, k);
        cout << '\n';
    }
    return 0;
}