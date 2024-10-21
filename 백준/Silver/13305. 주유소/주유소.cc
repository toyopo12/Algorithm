#include <iostream>

using namespace std;

int good[100010];
int price[100010];
int minprice;
int savegood;
int goodprice;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int i = 0; i < n - 1; i++) cin >> good[i];
    for(int i = 0; i < n; i++) cin >> price[i];
    minprice = price[0];
    for(int i = 0; i < n - 1; i++){
        savegood += good[i];
        if(price[i + 1] < minprice){
            goodprice += savegood * minprice;
            savegood = 0;
            minprice = price[i + 1];
        }
    }
    goodprice += savegood * minprice;
    cout << goodprice;
    return 0;
}