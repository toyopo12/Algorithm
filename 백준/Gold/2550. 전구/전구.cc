#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int arr[10010];
int arrnum[10010];
int lis[10010];
int dex[10010];
int lissize;
vector<int> s;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> arrnum[i];
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        arr[x] = i;
    }
    for(int i = 1; i <= n; i++){
        if(lissize == 0){
            lis[0] = arr[arrnum[i]];
            dex[i] = 1;
            lissize++;
        }
        else if(lis[lissize - 1] < arr[arrnum[i]]){
            lis[lissize++] = arr[arrnum[i]];
            dex[i] = lissize;
        }
        else{
            int *check = lower_bound(lis, lis + lissize, arr[arrnum[i]]);
            *check = arr[arrnum[i]];
            dex[i] = distance(lis, check) + 1;
        }
    }
    cout << lissize << '\n';
    for(int i = n; i > 0; i--){
        if(dex[i] == lissize){
            s.push_back(arrnum[i]);
            lissize--;
        }
    }
    sort(s.begin(),s.end(),greater<>());
    while(!s.empty()){
        cout << s.back() << " ";
        s.pop_back();
    }
    return 0;
}