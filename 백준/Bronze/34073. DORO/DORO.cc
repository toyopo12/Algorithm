#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N; cin >> N;
    while (N--) {
        string x; cin >> x;
        cout << x << "DORO "; 
    }
    return 0;
}