#include <iostream>

using namespace std;

int minsize = 100010;
int arr[100010];

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,s;
    int result = 0, start = 0, end = 0;
    cin >> n >> s;
    for(int i = 0; i < n; i++) cin >> arr[i];
    while(start <= n && end <= n){
        if(result < s) result += arr[end++];
        else if(result >= s){
            if(minsize > end - start) minsize = end - start;
            if(start == end) end++;
            else result -= arr[start++];
        }
    }
    if(minsize == 100010) cout << "0";
    else cout << minsize;
    return 0;
}