#include <iostream>

using namespace std;

int wall[505];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int rain = 0;
    int high = 0;
    int highnum = 0;
    int firstnum = 0;
    int check = 0;
    int h , w;
    cin >> h >> w;
    for(int i = 0; i < w; i++) cin >> wall[i];
    for(int i = 0; i < w; i++){ // 올라가기
        if(check == 0 && wall[i] > 0){
            check = 1;
            high = wall[i];
            firstnum = i;
        }
        else if(check == 1 && wall[i] >= high){
            if(firstnum + 1 == i){
                high = wall[i];
                firstnum = i;
            }
            else{
                int sum = 0;
                for(int j = firstnum; j < i; j++) sum += high - wall[j];
                rain += sum;
                high = wall[i];
                firstnum = i;
            }
        }
    }
    highnum = firstnum;
    high = 0;
    firstnum = w - 1;
    check = 0;
    for(int i = w - 1; i >= highnum; i--){ // 내려가기 -> 반대쪽에서부터 올라가기
        if(check == 0 && wall[i] > 0){
            check = 1;
            high = wall[i];
            firstnum = i;
        }
        else if(check == 1 && wall[i] >= high){
            if(firstnum - 1 == i){
                high = wall[i];
                firstnum = i;
            }
            else{
                int sum = 0;
                for(int j = firstnum; j > i; j--) sum += high - wall[j];
                rain += sum;
                high = wall[i];
                firstnum = i;
            }
        }
    }
    cout << rain;
    return 0;
}