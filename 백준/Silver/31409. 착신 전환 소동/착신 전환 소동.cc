#include <iostream>
#include <vector>

using namespace std;

vector<int> v;
int arr[100010];
int counting;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int x;
        cin >> x;
        if(x == i){
            v.push_back(x);
            counting++;
        }
        else arr[i] = x;
    }
    if(v.size() == 1){
        if(v[0] == 1) arr[v[0]] = 2;
        else arr[v[0]] = 1;
    }
    else if(!v.empty()){
        for(int i = 0; i < v.size() - 1; i++) arr[v[i]] = v[i + 1];
        arr[v[v.size() - 1]] = v[0];
    }
    cout << counting << '\n';
    for(int i = 1; i <= n; i++) cout << arr[i] << " ";
    return 0;
}