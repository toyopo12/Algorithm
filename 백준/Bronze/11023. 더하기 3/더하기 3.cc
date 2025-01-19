#include <iostream>

using namespace std;

int N, result;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    while(cin >> N) result += N;
    cout << result;
    return 0;
}