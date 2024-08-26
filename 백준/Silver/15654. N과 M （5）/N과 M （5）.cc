#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n,m;
int num[10];
bool visited[10010];

void hi(vector<int> &arr,int length)
{
    if(length==m)
    {
        for(int i=0;i<m;i++)
        {
            cout << arr[i] << " ";
        }
        cout << '\n';
        visited[arr.back()]=0;
        arr.pop_back();
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(!visited[num[i]])
        {
            arr.push_back(num[i]);
            visited[num[i]]=1;
            hi(arr,length+1);
        }
    }
    visited[arr.back()]=0;
    arr.pop_back();
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    for(int i=0;i<n;i++)
    {
        cin >> num[i];
    }
    sort(num,num+n);
    vector<int> good;
    hi(good,0);
    return 0;
}