#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue<int> hi;
    int arr[1010];
    int N,K;
    cin >> N >> K;
    for(int i=1;i<=N;i++)
    {
        hi.push(i);
    }
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<K-1;j++)
        {
            hi.push(hi.front());
            hi.pop();
        }
        arr[i]=hi.front();
        hi.pop();
    }
    cout << "<" << arr[0];
    for(int i=1;i<N;i++)
    {
        cout << ", " << arr[i];
    }
    cout << ">";
    return 0;
}