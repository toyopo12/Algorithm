#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> v[9];

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    v[1].push_back(2);
    v[1].push_back(3);
    v[1].push_back(5);
    v[1].push_back(7);
    for(int i = 2; i <= 8; i++){
        for(int j = 0; j < v[i - 1].size(); j++){
            for(int k = 1; k < 10; k += 2){
                bool check = 1;
                int good = v[i - 1][j] * 10 + k;
                for(int l = 3; l <= sqrt(good) + 1; l++){
                    if(good % l == 0) check = 0;
                }
                if(check == 1) v[i].push_back(good);
            }
        }
    }
    for(int i = 0; i < v[n].size(); i++) cout << v[n][i] << '\n';
    return 0;
}