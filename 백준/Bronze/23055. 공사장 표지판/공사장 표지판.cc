#include <iostream>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    if(n==1)
    {
        cout << "*";
    }
    else if(n%2==0)
    {
        for(int i=0;i<n;i++)
        {
            cout << "*";
        }
        cout << '\n';
        for(int i=0;i<n/2-1;i++)
        {
            cout << "*";
            for(int j=0;j<i;j++)
            {
                cout << " ";
            }
            cout << "*";
            for(int j=0;j<n-2*(i+2);j++)
            {
                cout << " ";
            }
            cout << "*";
            for(int j=0;j<i;j++)
            {
                cout << " ";
            }
            cout << "*";
            cout << "\n";
        }
        for(int i=n/2-2;i>=0;i--)
        {
            cout << "*";
            for(int j=0;j<i;j++)
            {
                cout << " ";
            }
            cout << "*";
            for(int j=0;j<n-2*(i+2);j++)
            {
                cout << " ";
            }
            cout << "*";
            for(int j=0;j<i;j++)
            {
                cout << " ";
            }
            cout << "*";
            cout << "\n";
        }
        for(int i=0;i<n;i++)
        {
            cout << "*";
        }
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            cout << "*";
        }
        cout << '\n';
        for(int i=0;i<n/2-1;i++)
        {
            cout << "*";
            for(int j=0;j<i;j++)
            {
                cout << " ";
            }
            cout << "*";
            for(int j=0;j<n-2*(i+2);j++)
            {
                cout << " ";
            }
            cout << "*";
            for(int j=0;j<i;j++)
            {
                cout << " ";
            }
            cout << "*";
            cout << "\n";
        }
        cout << "*";
        for(int i=0;i<n/2-1;i++)
        {
            cout << " ";
        }
        cout << "*";
        for(int i=0;i<n/2-1;i++)
        {
            cout << " ";
        }
        cout << "*";
        cout << "\n";
        for(int i=n/2-2;i>=0;i--)
        {
            cout << "*";
            for(int j=0;j<i;j++)
            {
                cout << " ";
            }
            cout << "*";
            for(int j=0;j<n-2*(i+2);j++)
            {
                cout << " ";
            }
            cout << "*";
            for(int j=0;j<i;j++)
            {
                cout << " ";
            }
            cout << "*";
            cout << "\n";
        }
        for(int i=0;i<n;i++)
        {
            cout << "*";
        }
    }
    return 0;
}