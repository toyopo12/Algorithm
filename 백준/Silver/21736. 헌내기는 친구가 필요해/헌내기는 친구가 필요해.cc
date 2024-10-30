#include <iostream>
#include <string>

using namespace std;

int arr[606][606];
bool visited[606][606];
int hix, hiy;
int counting;
int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, -1, 1};

void bfs(int x, int y)
{
    if(arr[x][y] == 2) counting++;
    visited[x][y] = 1;
    for(int i = 0; i < 4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(arr[nx][ny] != 0 && visited[nx][ny] != 1) bfs(nx, ny);
    }
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        string x;
        cin >> x;
        for(int j = 0; j < x.size(); j++){
            if(x[j] == 'O') arr[i + 1][j + 1] = 1;
            else if(x[j] == 'P') arr[i + 1][j + 1] = 2;
            else if(x[j] == 'I'){
                hix = i + 1;
                hiy = j + 1;
            }
        }
    }
    visited[hix][hiy] = 1;
    bfs(hix, hiy);
    if(counting == 0) cout << "TT";
    else cout << counting;
    return 0;
}