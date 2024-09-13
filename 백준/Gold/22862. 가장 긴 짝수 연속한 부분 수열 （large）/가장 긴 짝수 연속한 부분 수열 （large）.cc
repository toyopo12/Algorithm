#include <iostream>

using namespace std;

bool arr[1000010];
int finish;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x % 2 == 1) arr[i] = 1;
    }
    int start = 0;
    int end = 0;
    int now = 0;
    while(end <= n){
        if(finish < end - start - now && now <= k) finish = end - start - now;
        if(now <= k) now += arr[end++];
        else now -= arr[start++];
    }
    cout << finish;
    return 0;
}