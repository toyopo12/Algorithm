#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int arr[1010]={0};
    int max=1001;
    int count=0;
    vector<int> one;
    vector<int> two;
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n,greater<int>());
    for(int i=0;i<n;i++)
    {
        if(max==arr[i])
        {
            if(count==1)
            {
                two.push_back(arr[i]);
                count++;
            }
        }
        else if(max>arr[i])
        {
            max=arr[i];
            one.push_back(arr[i]);
            count=1;
        }
    }
    cout << one.size()+two.size();
    return 0;
}