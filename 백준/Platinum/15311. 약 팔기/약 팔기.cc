#include <iostream>

using namespace std;

int N;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> N;
    cout << "2000" << '\n';
    for(int i = 0; i < 1000; i++) cout << "1 ";
    for(int i = 0; i < 1000; i++) cout << "1000 ";
    return 0;
}