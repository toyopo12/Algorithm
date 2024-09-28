#include <iostream>

using namespace std;

long long arr[100010];
long long brr[100010];

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, q;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];
    for(int i = 0; i < n; i++) cin >> brr[i];
    cin >> q;
    int x, y, k;
    while(q--){
        cin >> x >> y >> k;
        long long start = 0;
        long long end = 3000000000;
        while(start < end - 1){
            long long mid = (start + end) / 2;
            int acount = upper_bound(arr, arr + x, mid) - arr;
            int bcount = upper_bound(brr, brr + y, mid) - brr;
            if(acount + bcount > k) end = mid;
            else if(acount + bcount < k) start = mid;
            else{
                if(arr[acount - 1] < brr[bcount - 1]) cout << "2 " << bcount;
                else cout << "1 " << acount;
                cout << '\n';
                break;
            }
        }
    }
    return 0;
}