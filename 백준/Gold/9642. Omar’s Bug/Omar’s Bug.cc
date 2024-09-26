#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if(c == 1){
            if(a < b) for(int i = 1; i <= a; i++) cout << i << " ";
            else{
                for(int i = 1; i < b; i++) cout << i << " ";
                for(int i = b + 1; i <= a + 1; i++) cout << i << " ";
                cout << '\n';
            }
        }
        else{
            if(a <= b){
                for(int i = 1; i < a; i++) cout << i << " ";
                cout << b << '\n';
            }
            else{
                for(int i = 1; i <= a; i++) cout << i << " ";
                cout << '\n';
            }
        }
    }
    return 0;
}