#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int N; cin >> N;
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) cout << "@";
        for(int j = 0; j < N; j++) cout << "   ";
        for(int j = 0; j < N; j++) cout << "@";
        cout << '\n';
    }
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) cout << "@";
        for(int j = 0; j < N; j++) cout << "  ";
        for(int j = 0; j < N; j++) cout << "@";
        cout << '\n';
    }
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < 3 * N; j++) cout << "@";
        cout << '\n';
    }
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) cout << "@";
        for(int j = 0; j < N; j++) cout << "  ";
        for(int j = 0; j < N; j++) cout << "@";
        cout << '\n';
    }
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) cout << "@";
        for(int j = 0; j < N; j++) cout << "   ";
        for(int j = 0; j < N; j++) cout << "@";
        cout << '\n';
    }
    return 0;
}