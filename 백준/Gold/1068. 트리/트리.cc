#include <iostream>
#include <vector>

using namespace std;

vector<int> v[55];
int nodecount;
int rootnode;
int d;

void del(int n){
    if(v[n].size() == 0) nodecount--;
    for(int i = 0; i < v[n].size(); i++) del(v[n][i]);
}

void counting(int n){
    if(v[n].size() == 1 && v[n][0] == d) nodecount++;
    if(v[n].size() == 0) nodecount++;
    for(int i = 0; i < v[n].size(); i++) counting(v[n][i]);
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x == -1) rootnode = i;
        else v[x].push_back(i);
    }
    cin >> d;
    if(v[rootnode].size() == 1 && v[rootnode][0] == d){
        cout << "1";
        return 0;
    }
    counting(rootnode);
    del(d);
    cout << nodecount;
    return 0;
}