#include <iostream>
#include <algorithm>

using namespace std;

int arr[100010];
int minsize = 0x7fffffff;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin >> n >> m;
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr,arr+n);
    int start = 0, end = 0, now = 0;
    while(end <= n){
        if(now < m){
            now -= arr[end++];
            now += arr[end];
        }
        else{
            if(minsize > now) minsize = now;
            now += arr[start++];
            now -= arr[start];
        }
    }
    cout << minsize;
    return 0;
}