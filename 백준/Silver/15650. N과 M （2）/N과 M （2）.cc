#include <iostream>
#include <vector>
using namespace std;

int n,m;

void hi(vector<int> &arr,int length, bool* visited)
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
    int bb;
    if(arr.empty())
    {
        bb=1;
    }
    else
    {
        bb=arr.back()+1;
    }
    for(int i=bb;i<=n;i++)
    {
        if(!visited[i])
        {
            arr.push_back(i);
            visited[i]=1;
            hi(arr,length+1,visited);
        }
    }
    visited[arr.back()]=0;
    arr.pop_back();
    return;
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    vector<int> asdf;
    bool visited[9]={0};
    hi(asdf, 0, visited);
    return 0;
}