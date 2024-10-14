#include <iostream>

using namespace std;

int n, k;
int a[500050];
int tmp[500050];
int check = 0;
int checknum;

void merge(int p, int q, int r)
{
    int i = p;
    int j = q + 1;
    int t = 1;
    while(i <= q && j <= r){
        if(a[i] <= a[j]) tmp[t++] = a[i++];
        else tmp[t++] = a[j++];
    }
    while(i <= q) tmp[t++] = a[i++];
    while(j <= r) tmp[t++] = a[j++];
    i = p;
    t = 1;
    while(i <= r){
        a[i++] = tmp[t++];
        check++;
        if(check == k) checknum = a[i - 1];
    }
}

void merge_sort(int p, int r)
{
    if(p < r){
        int q = (p + r) / 2;
        merge_sort(p, q);
        merge_sort(q + 1, r);
        merge(p, q, r);
    }
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cin.tie(nullptr);
    cin >> n >> k;
    for(int i = 1; i <= n; i++) cin >> a[i];
    merge_sort(1, n);
    if(checknum == 0) cout << "-1";
    else cout << checknum;
    return 0;
}