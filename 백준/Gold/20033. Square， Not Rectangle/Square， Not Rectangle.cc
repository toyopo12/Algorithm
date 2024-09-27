#include <iostream>

using namespace std;

int arr[300003];
int n;

bool check(int good){
    for(int i = 0; i < n; i++){
        if(arr[i] >= good){
            int goodnum = 0;
            while(arr[i] >= good){
                goodnum++;
                i++;
            }
            if(goodnum >= good) return 1;
        }
    }
    return 0;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];
    int start = 1;
    int end = 300001;
    while(start < end - 1){
        int mid = (start + end) / 2;
        if(check(mid) == 1) start = mid;
        else end = mid;
    }
    cout << start;
    return 0;
}