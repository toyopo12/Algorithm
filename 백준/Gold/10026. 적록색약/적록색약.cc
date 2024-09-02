#include <iostream>
#include <string>

using namespace std;

int n;

int picture[102][102];
bool novisited[102][102];
bool rgvisited[102][102];
int nocount;
int rgcount;
int dx[4]={-1,1,0,0};
int dy[4]={0,0,-1,1};

void nodfs(int x, int y){
    if(novisited[x][y] == 1) return;
    novisited[x][y] = 1;
    for(int i = 0; i < 4; i++){
        if(picture[x + dx[i]][y + dy[i]] == picture[x][y] && !novisited[x + dx[i]][y + dy[i]]) nodfs(x + dx[i], y + dy[i]);
    }
}

void rgdfs(int x, int y){
    if(rgvisited[x][y] == 1) return;
    rgvisited[x][y] = 1;
    for(int i = 0; i < 4; i++){
        if(picture[x][y] == 1 || picture[x][y] == 3){
            if(picture[x + dx[i]][y + dy[i]] == 1 || picture[x + dx[i]][y + dy[i]] == 3){
                if(!rgvisited[x + dx[i]][y + dy[i]]) rgdfs(x + dx[i], y + dy[i]);
            }
        }
        else if(!rgvisited[x + dx[i]][y + dy[i]] && picture[x + dx[i]][y + dy[i]] == 2) rgdfs(x + dx[i], y + dy[i]);
    }
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for(int i = 1; i <= n; i++){
        string x;
        cin >> x;
        for(int j = 0; j < n; j++){
            if(x[j] == 'R') picture[i][j + 1] = 1;
            else if(x[j] == 'B') picture[i][j + 1] = 2;
            else if(x[j] == 'G') picture[i][j + 1] = 3;
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(!novisited[i][j]){
                nodfs(i, j);
                nocount++;
            }
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(!rgvisited[i][j]){
                rgdfs(i, j);
                rgcount++;
            }
        }
    }
    cout << nocount << '\n' << rgcount;
    return 0;
}