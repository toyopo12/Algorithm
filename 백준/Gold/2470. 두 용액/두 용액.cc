#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;

long long arr[100010];

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr,arr + n);
    int start = 0, end = n - 1;
    long long minsize = abs(arr[0] + arr[n - 1]);
    long long minnum = arr[0];
    long long maxnum = arr[n - 1];
    while(start < end){
        long long now = arr[start] + arr[end];
        if(minsize > abs(now)){
            minsize = abs(now);
            minnum = arr[start];
            maxnum = arr[end];
        }
        if(now < 0) start++;
        else end--;
    }
    cout << minnum << " " <<  maxnum;
    return 0;
}