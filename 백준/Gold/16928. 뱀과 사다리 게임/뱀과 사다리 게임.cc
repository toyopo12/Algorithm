#include <iostream>
#include <queue>

using namespace std;

pair<int, int> ladder[16];
pair<int, int> snake[16];
queue<pair<int, int>> q;
int counting[110];

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++) cin >> ladder[i].first >> ladder[i].second;
    for(int i = 1; i <= m; i++) cin >> snake[i].first >> snake[i].second;
    for(int i = 2; i <= 100; i++) counting[i] = 1000000000;
    q.push({1,0});
    while(!q.empty()){
        bool dice = 0;
        if(q.front().first > 100){
            q.pop();
            goto hi;
        }
        else if(q.front().first == 100){
            counting[100] = min(counting[100], q.front().second);
            q.pop();
            goto hi;
        }
        for(int i = 1; i <= n; i++){
            if(q.front().first == ladder[i].first){
                if(counting[ladder[i].second] > q.front().second){
                    q.push({ladder[i].second, q.front().second});
                    counting[ladder[i].second] = q.front().second;
                }
                dice = 1;
                q.pop();
            }
        }
        for(int i = 1; i <= m; i++){
            if(q.front().first == snake[i].first){
                if(counting[snake[i].second] > q.front().second){
                    q.push({snake[i].second, q.front().second});
                    counting[snake[i].second] = q.front().second;
                }
                dice = 1;
                q.pop();
            }
        }
        if(!dice){
            for(int i = 1; i <= 6; i++) if(counting[q.front().first + i] > q.front().second + 1){
                    q.push({q.front().first + i, q.front().second + 1});
                    counting[q.front().first + i] = q.front().second + 1;
            }
            q.pop();
        }
        hi:;
    }
    cout << counting[100];
    return 0;
}