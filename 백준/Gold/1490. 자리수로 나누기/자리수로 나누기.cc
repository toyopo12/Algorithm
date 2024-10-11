#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

vector<int> v;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cin.tie(nullptr);
    long long n;
    cin >> n;
    long long good = n;
    while(good != 0){
        if(good % 10 != 0) v.push_back(good % 10);
        good /= 10;
    }
    bool check1 = 0;
    for(int i = 0; i < v.size(); i++){
        if(n % v[i] != 0){
            check1 = 1;
            break;
        }
    }
    if(!check1){
        cout << n;
        return 0;
    }
    int ten = 1;
    while(1){
        for(int i = 0; i < pow(10, ten); i++){
            bool check = 0;
            long long tenten = n * pow(10, ten) + i;
            for(int j = 0; j < v.size(); j++){
                if(tenten % v[j] != 0){
                    check = 1;
                    break;
                }
            }
            if(!check){
                cout << tenten;
                return 0;
            }
        }
        ten++;
    }
    return 0;
}