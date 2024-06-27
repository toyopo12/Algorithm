#include <iostream>
#include <vector>
using namespace std;

int n,m;

void hi(vector<int> &arr,int length)
{
    if(length==m)
    {
        for(int i=0;i<m;i++)
        {
            cout << arr[i] << " ";
        }
        cout << '\n';
        arr.pop_back();
        return;
    }
    for(int i=1;i<=n;i++)
    {
        arr.push_back(i);
        hi(arr,length+1);
    }
    arr.pop_back();
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n >> m;
    vector<int> asdf;
    hi(asdf,0);
    return 0;
}