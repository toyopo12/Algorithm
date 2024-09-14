#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int arr[1000010];
int lis[1000010];
int dex[1000010];
int lissize;
stack<int> s;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
        if(lissize == 0){
            lis[0] = arr[i];
            dex[i] = 1;
            lissize++;
        }
        else if(lis[lissize - 1] < arr[i]){
            lis[lissize++] = arr[i];
            dex[i] = lissize;
        }
        else{
            int *check = lower_bound(lis, lis + lissize, arr[i]);
            *check = arr[i];
            dex[i] = distance(lis, check) + 1;
        }
    }
    cout << lissize << '\n';
    for(int i = n; i > 0; i--){
        if(dex[i] == lissize){
            s.push(arr[i]);
            lissize--;
        }
    }
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }
    return 0;
}