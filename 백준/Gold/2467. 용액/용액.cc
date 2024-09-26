#include <iostream>
#include <algorithm>
#include <cstdlib>

using namespace std;

int arr[100010];
int mini = 0x7fffffff;
int minione;
int minitwo;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];
    if(n == 2){
        cout << arr[0] << " " << arr[1];
        return 0;
    }
    for(int i = 0; i < n - 1; i++){
        int start = i + 1;
        int end = n;
        while(start < end - 1){
            int mid = (start + end) / 2;
            if(arr[i] + arr[mid] >= 0) end = mid;
            else start = mid;
        }
        if(end == n){
            if(abs(arr[i] + arr[start]) < abs(mini)  && start != i){
                mini = arr[i] + arr[start];
                minione = arr[i];
                minitwo = arr[start];
            }
        }
        else{
            if(abs(arr[i] + arr[end]) < abs(mini)){
                mini = arr[i] + arr[end];
                minione = arr[i];
                minitwo = arr[end];
            }
            if(abs(arr[i] + arr[start]) < abs(mini) && start != i){
                mini = arr[i] + arr[start];
                minione = arr[i];
                minitwo = arr[start];
            }
        }
    }
    cout << minione << " " << minitwo;
    return 0;
}