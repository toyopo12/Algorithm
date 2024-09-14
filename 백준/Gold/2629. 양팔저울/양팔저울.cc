#include <iostream>
#include <cstdlib>

using namespace std;

int weight[31];
bool check[15015][33];

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int weightnum, ballnum;
    cin >> weightnum;
    for(int i = 0; i < weightnum; i++) cin >> weight[i];
    check[0][0] = 1;
    for(int i = 0; i < weightnum; i++){
        for(int j = 0; j <= 15000; j++){
            if(check[j][i] == 1){
                check[j][i + 1] = 1;
                check[abs(j - weight[i])][i + 1] = 1;
                check[weight[i] + j][i + 1] = 1;
            }
        }
    }
    cin >> ballnum;
    while(ballnum--){
        int ball;
        cin >> ball;
        if(ball > 15000) cout << "N";
        else{
            if(check[ball][weightnum] == 1) cout << "Y";
            else cout << "N";
        }
        cout << " ";
    }
    return 0;
}