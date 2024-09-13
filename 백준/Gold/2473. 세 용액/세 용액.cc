#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;

long long arr[5050];

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];
    sort(arr,arr + n);
    long long minsize = abs(arr[0] + arr[1] + arr[n - 1]);
    int onenum = arr[0];
    int twonum = arr[1];
    int threenum = arr[n - 1];
    for(int i = 0; i < n - 2; i++){
        int start = i + 1, end = n - 1;
        while(start < end){
            long long now = arr[i] + arr[start] + arr[end];
            if(minsize > abs(now)){
                minsize = abs(now);
                onenum = arr[i];
                twonum = arr[start];
                threenum = arr[end];
            }
            if(now < 0) start++;
            else end--;
        }
    }
    cout << onenum << " " << twonum << " " << threenum;
    return 0;
}