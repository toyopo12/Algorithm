#include <iostream>
#include <algorithm>

using namespace std;

int a[4040];
int b[4040];
int c[4040];
int d[4040];
int arr[16000016];
int brr[16000016];
long long finish;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i] >> c[i] >> d[i];
    for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) arr[i * n + j] = a[i] + b[j];
    for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) brr[i * n + j] = c[i] + d[j];
    sort(arr,arr + n * n);
    sort(brr,brr + n * n);
    int start = 0, end = n * n - 1;
    while(start < n * n && end >= 0){
        int now = arr[start] + brr[end];
        if(now == 0){
            long long acount = 0, bcount = 0;
            while(arr[start] + brr[end] == 0){
                acount++;
                start++;
                if(start == n * n) break;
            }
            while(arr[start - 1] + brr[end] == 0){
                bcount++;
                end--;
                if(end < 0) break;
            }
            finish += acount * bcount;
        }
        else if(now < 0) start++;
        else end--;
    }
    cout << finish;
    return 0;
}