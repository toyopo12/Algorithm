#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

priority_queue<int, vector<int>, greater<int>> ppq;
priority_queue<int> mpq;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x != 0){
            if(x > 0) ppq.push(x);
            else mpq.push(x);
        }
        else{
            if(ppq.empty() && mpq.empty()) cout << "0" << '\n';
            else if(ppq.empty()){
                cout << mpq.top() << '\n';
                mpq.pop();
            }
            else if(mpq.empty()){
                cout << ppq.top() << '\n';
                ppq.pop();
            }
            else{
                if(ppq.top() < abs(mpq.top())){
                    cout << ppq.top() << '\n';
                    ppq.pop();
                }
                else{
                    cout << mpq.top() << '\n';
                    mpq.pop();
                }
            }
        }
    }
    return 0;
}