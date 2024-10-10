#include <iostream>

using namespace std;

long long dd;

int fib(int n)
{
    if(n == 1 || n== 2){
        dd++;
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cin.tie(nullptr);
    int n;
    cin >> n;
    fib(n);
    cout << dd << " " << n - 2;
    return 0;
}