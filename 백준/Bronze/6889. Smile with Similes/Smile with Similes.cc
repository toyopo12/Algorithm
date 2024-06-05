#include <iostream>
#include <string>

using namespace std;

int main()
{
    string n[6];
    string m[6];
    int N,M;
    cin >> N >> M;
    for(int i=0;i<N;i++)
    {
        cin >> n[i];
    }
    for(int i=0;i<M;i++)
    {
        cin >> m[i];
    }
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            cout << n[i] << " as " << m[j] << "\n";
        }
    }
    return 0;
}