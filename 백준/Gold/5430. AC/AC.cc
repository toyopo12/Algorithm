#include <iostream>
#include <string>
#include <deque>

using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T;
    cin >> T;
    for(int i=0;i<T;i++)
    {
        int count=0;
        string p;
        string x;
        int n;
        deque<int> num;
        cin >> p >> n >> x;
        //입력이 어려워요
        string temp="";
        for(int j=1;j<x.size();j++)
        {
            if(x[j]==',' || x[j]==']')
            {
                if(temp!="")
                {
                    num.push_back(stoi(temp));
                    temp="";
                }
            }
            else
            {
                temp+=x[j];
            }
        }
        for(int j=0;j<p.size();j++)
        {
            if(p[j]=='R')
            {
                count++;
            }
            else
            {
                if(num.size()==0)
                {
                    cout << "error\n";
                    goto hi;
                }
                if(count%2==0)
                {
                    num.pop_front();
                }
                else
                {
                    num.pop_back();
                }
            }
        }
        cout << "[";
        if(num.size()==0)
        {
            cout << "]\n";
        }
        else
        {
            if(count%2==0)
            {
                for(int j=0;j<num.size()-1;j++)
                {
                    cout << num[j] << ",";
                }
                cout << num[num.size()-1] << "]\n";
            }
            else
            {
                for(int j=num.size()-1;j>0;j--)
                {
                    cout << num[j] << ",";
                }
                cout << num[0] << "]\n";
            }
        }
        hi:;
    }
    return 0;
}