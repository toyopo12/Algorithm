#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    for(int i=0;i<N;i++)
    {
        int M;
        int sum=0;
        cin >> M;
        for(int j=0;j<M;j++)
        {
            int num;
            cin >> num;
            sum+=num;
        }
        cout << sum << endl;
    }
    return 0;
}