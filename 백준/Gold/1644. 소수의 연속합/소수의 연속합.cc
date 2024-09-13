#include <iostream>

using namespace std;

bool arr[4000004];
int bread[2000002];
int finish;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for(int i = 2; i * i <= n; i++) if(arr[i] == 0) for(int j = 2 * i; j <= n; j += i) arr[j] = 1;
    int count = 0;
    for(int i = 2; i <= n; i++) if(arr[i] == 0) bread[count++] = i;
    int start = 0, end = 0;
    long long now = 0;
    while(end <= count){
        if(now == n){
            finish++;
            now -= bread[start++];
        }
        if(now < n) now += bread[end++];
        else now -= bread[start++];
    }
    cout << finish;
    return 0;
}