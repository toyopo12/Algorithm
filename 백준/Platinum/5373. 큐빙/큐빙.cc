#include <iostream>
#include <string>

using namespace std;

int cube[6][9];
char color[6] = {'w', 'y', 'r', 'o', 'g', 'b'};

void front_turn(char n, int order){
    int tmp[9];
    int x = 0;
    if(n == 'U') x = 0;
    else if(n == 'D') x = 1;
    else if(n == 'F') x = 2;
    else if(n == 'B') x = 3;
    else if(n == 'L') x = 4;
    else if(n == 'R') x = 5;
    if(x != 1){
        for(int i = 0; i < 9; i++) tmp[i] = cube[x][i];
        if(order){
            cube[x][0] = tmp[6];
            cube[x][1] = tmp[3];
            cube[x][2] = tmp[0];
            cube[x][3] = tmp[7];
            cube[x][5] = tmp[1];
            cube[x][6] = tmp[8];
            cube[x][7] = tmp[5];
            cube[x][8] = tmp[2];
        }
        else{
            cube[x][0] = tmp[2];
            cube[x][1] = tmp[5];
            cube[x][2] = tmp[8];
            cube[x][3] = tmp[1];
            cube[x][5] = tmp[7];
            cube[x][6] = tmp[0];
            cube[x][7] = tmp[3];
            cube[x][8] = tmp[6];
        }
    }
    else{
        tmp[0] = cube[1][2];
        tmp[1] = cube[1][1];
        tmp[2] = cube[1][0];
        tmp[3] = cube[1][5];
        tmp[4] = cube[1][4];
        tmp[5] = cube[1][3];
        tmp[6] = cube[1][8];
        tmp[7] = cube[1][7];
        tmp[8] = cube[1][6];
        if(order){
            cube[x][2] = tmp[6];
            cube[x][1] = tmp[3];
            cube[x][0] = tmp[0];
            cube[x][5] = tmp[7];
            cube[x][3] = tmp[1];
            cube[x][8] = tmp[8];
            cube[x][7] = tmp[5];
            cube[x][6] = tmp[2];
        }
        else{
            cube[x][2] = tmp[2];
            cube[x][1] = tmp[5];
            cube[x][0] = tmp[8];
            cube[x][5] = tmp[1];
            cube[x][3] = tmp[7];
            cube[x][8] = tmp[0];
            cube[x][7] = tmp[3];
            cube[x][6] = tmp[6];
        }
    }
}

void side_turn(char n, int order){
    if(n == 'U'){
        int tmp[4][3];
        tmp[0][0] = cube[2][0];
        tmp[0][1] = cube[2][1];
        tmp[0][2] = cube[2][2];
        tmp[1][0] = cube[5][0];
        tmp[1][1] = cube[5][1];
        tmp[1][2] = cube[5][2];
        tmp[2][0] = cube[3][0];
        tmp[2][1] = cube[3][1];
        tmp[2][2] = cube[3][2];
        tmp[3][0] = cube[4][0];
        tmp[3][1] = cube[4][1];
        tmp[3][2] = cube[4][2];
        if(order){
            cube[2][0] = tmp[1][0];
            cube[2][1] = tmp[1][1];
            cube[2][2] = tmp[1][2];
            cube[5][0] = tmp[2][0];
            cube[5][1] = tmp[2][1];
            cube[5][2] = tmp[2][2];
            cube[3][0] = tmp[3][0];
            cube[3][1] = tmp[3][1];
            cube[3][2] = tmp[3][2];
            cube[4][0] = tmp[0][0];
            cube[4][1] = tmp[0][1];
            cube[4][2] = tmp[0][2];
        }
        else{
            cube[2][0] = tmp[3][0];
            cube[2][1] = tmp[3][1];
            cube[2][2] = tmp[3][2];
            cube[5][0] = tmp[0][0];
            cube[5][1] = tmp[0][1];
            cube[5][2] = tmp[0][2];
            cube[3][0] = tmp[1][0];
            cube[3][1] = tmp[1][1];
            cube[3][2] = tmp[1][2];
            cube[4][0] = tmp[2][0];
            cube[4][1] = tmp[2][1];
            cube[4][2] = tmp[2][2];
        }
    }
    else if(n == 'D'){
        int tmp[4][3];
        tmp[0][0] = cube[2][6];
        tmp[0][1] = cube[2][7];
        tmp[0][2] = cube[2][8];
        tmp[1][0] = cube[5][6];
        tmp[1][1] = cube[5][7];
        tmp[1][2] = cube[5][8];
        tmp[2][0] = cube[3][6];
        tmp[2][1] = cube[3][7];
        tmp[2][2] = cube[3][8];
        tmp[3][0] = cube[4][6];
        tmp[3][1] = cube[4][7];
        tmp[3][2] = cube[4][8];
        if(order){
            cube[2][6] = tmp[3][0];
            cube[2][7] = tmp[3][1];
            cube[2][8] = tmp[3][2];
            cube[5][6] = tmp[0][0];
            cube[5][7] = tmp[0][1];
            cube[5][8] = tmp[0][2];
            cube[3][6] = tmp[1][0];
            cube[3][7] = tmp[1][1];
            cube[3][8] = tmp[1][2];
            cube[4][6] = tmp[2][0];
            cube[4][7] = tmp[2][1];
            cube[4][8] = tmp[2][2];
        }
        else{
            cube[2][6] = tmp[1][0];
            cube[2][7] = tmp[1][1];
            cube[2][8] = tmp[1][2];
            cube[5][6] = tmp[2][0];
            cube[5][7] = tmp[2][1];
            cube[5][8] = tmp[2][2];
            cube[3][6] = tmp[3][0];
            cube[3][7] = tmp[3][1];
            cube[3][8] = tmp[3][2];
            cube[4][6] = tmp[0][0];
            cube[4][7] = tmp[0][1];
            cube[4][8] = tmp[0][2];
        }
    }
    else if(n == 'F'){
        int tmp[4][3];
        tmp[0][0] = cube[1][6];
        tmp[0][1] = cube[1][7];
        tmp[0][2] = cube[1][8];
        tmp[1][0] = cube[5][6];
        tmp[1][1] = cube[5][3];
        tmp[1][2] = cube[5][0];
        tmp[2][0] = cube[0][8];
        tmp[2][1] = cube[0][7];
        tmp[2][2] = cube[0][6];
        tmp[3][0] = cube[4][2];
        tmp[3][1] = cube[4][5];
        tmp[3][2] = cube[4][8];
        if(order){
            cube[1][6] = tmp[1][0];
            cube[1][7] = tmp[1][1];
            cube[1][8] = tmp[1][2];
            cube[5][6] = tmp[2][0];
            cube[5][3] = tmp[2][1];
            cube[5][0] = tmp[2][2];
            cube[0][8] = tmp[3][0];
            cube[0][7] = tmp[3][1];
            cube[0][6] = tmp[3][2];
            cube[4][2] = tmp[0][0];
            cube[4][5] = tmp[0][1];
            cube[4][8] = tmp[0][2];
        }
        else{
            cube[1][6] = tmp[3][0];
            cube[1][7] = tmp[3][1];
            cube[1][8] = tmp[3][2];
            cube[5][6] = tmp[0][0];
            cube[5][3] = tmp[0][1];
            cube[5][0] = tmp[0][2];
            cube[0][8] = tmp[1][0];
            cube[0][7] = tmp[1][1];
            cube[0][6] = tmp[1][2];
            cube[4][2] = tmp[2][0];
            cube[4][5] = tmp[2][1];
            cube[4][8] = tmp[2][2];
        }
    }
    else if(n == 'B'){
        int tmp[4][3];
        tmp[0][0] = cube[0][0];
        tmp[0][1] = cube[0][1];
        tmp[0][2] = cube[0][2];
        tmp[1][0] = cube[5][2];
        tmp[1][1] = cube[5][5];
        tmp[1][2] = cube[5][8];
        tmp[2][0] = cube[1][2];
        tmp[2][1] = cube[1][1];
        tmp[2][2] = cube[1][0];
        tmp[3][0] = cube[4][6];
        tmp[3][1] = cube[4][3];
        tmp[3][2] = cube[4][0];
        if(order){
            cube[0][0] = tmp[1][0];
            cube[0][1] = tmp[1][1];
            cube[0][2] = tmp[1][2];
            cube[5][2] = tmp[2][0];
            cube[5][5] = tmp[2][1];
            cube[5][8] = tmp[2][2];
            cube[1][2] = tmp[3][0];
            cube[1][1] = tmp[3][1];
            cube[1][0] = tmp[3][2];
            cube[4][6] = tmp[0][0];
            cube[4][3] = tmp[0][1];
            cube[4][0] = tmp[0][2];
        }
        else{
            cube[0][0] = tmp[3][0];
            cube[0][1] = tmp[3][1];
            cube[0][2] = tmp[3][2];
            cube[5][2] = tmp[0][0];
            cube[5][5] = tmp[0][1];
            cube[5][8] = tmp[0][2];
            cube[1][2] = tmp[1][0];
            cube[1][1] = tmp[1][1];
            cube[1][0] = tmp[1][2];
            cube[4][6] = tmp[2][0];
            cube[4][3] = tmp[2][1];
            cube[4][0] = tmp[2][2];
        }
    }
    else if(n == 'L'){
        int tmp[4][3];
        tmp[0][0] = cube[2][6];
        tmp[0][1] = cube[2][3];
        tmp[0][2] = cube[2][0];
        tmp[1][0] = cube[0][6];
        tmp[1][1] = cube[0][3];
        tmp[1][2] = cube[0][0];
        tmp[2][0] = cube[3][2];
        tmp[2][1] = cube[3][5];
        tmp[2][2] = cube[3][8];
        tmp[3][0] = cube[1][0];
        tmp[3][1] = cube[1][3];
        tmp[3][2] = cube[1][6];
        if(order){
            cube[2][6] = tmp[1][0];
            cube[2][3] = tmp[1][1];
            cube[2][0] = tmp[1][2];
            cube[0][6] = tmp[2][0];
            cube[0][3] = tmp[2][1];
            cube[0][0] = tmp[2][2];
            cube[3][2] = tmp[3][0];
            cube[3][5] = tmp[3][1];
            cube[3][8] = tmp[3][2];
            cube[1][0] = tmp[0][0];
            cube[1][3] = tmp[0][1];
            cube[1][6] = tmp[0][2];
        }
        else{
            cube[2][6] = tmp[3][0];
            cube[2][3] = tmp[3][1];
            cube[2][0] = tmp[3][2];
            cube[0][6] = tmp[0][0];
            cube[0][3] = tmp[0][1];
            cube[0][0] = tmp[0][2];
            cube[3][2] = tmp[1][0];
            cube[3][5] = tmp[1][1];
            cube[3][8] = tmp[1][2];
            cube[1][0] = tmp[2][0];
            cube[1][3] = tmp[2][1];
            cube[1][6] = tmp[2][2];
        }
    }
    else if(n == 'R'){
        int tmp[4][3];
        tmp[0][0] = cube[2][2];
        tmp[0][1] = cube[2][5];
        tmp[0][2] = cube[2][8];
        tmp[1][0] = cube[1][8];
        tmp[1][1] = cube[1][5];
        tmp[1][2] = cube[1][2];
        tmp[2][0] = cube[3][6];
        tmp[2][1] = cube[3][3];
        tmp[2][2] = cube[3][0];
        tmp[3][0] = cube[0][2];
        tmp[3][1] = cube[0][5];
        tmp[3][2] = cube[0][8];
        if(order){
            cube[2][2] = tmp[1][0];
            cube[2][5] = tmp[1][1];
            cube[2][8] = tmp[1][2];
            cube[1][8] = tmp[2][0];
            cube[1][5] = tmp[2][1];
            cube[1][2] = tmp[2][2];
            cube[3][6] = tmp[3][0];
            cube[3][3] = tmp[3][1];
            cube[3][0] = tmp[3][2];
            cube[0][2] = tmp[0][0];
            cube[0][5] = tmp[0][1];
            cube[0][8] = tmp[0][2];
        }
        else{
            cube[2][2] = tmp[3][0];
            cube[2][5] = tmp[3][1];
            cube[2][8] = tmp[3][2];
            cube[1][8] = tmp[0][0];
            cube[1][5] = tmp[0][1];
            cube[1][2] = tmp[0][2];
            cube[3][6] = tmp[1][0];
            cube[3][3] = tmp[1][1];
            cube[3][0] = tmp[1][2];
            cube[0][2] = tmp[2][0];
            cube[0][5] = tmp[2][1];
            cube[0][8] = tmp[2][2];
        }
    }
}

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        for(int a = 0; a < 6; a++) for(int b = 0; b < 9; b++) cube[a][b] = a;
        int n;
        string x;
        cin >> n;
        while(n--){
            int order = 0;
            cin >> x;
            if(x[1] == '+') order = 1;
            front_turn(x[0], order);
            side_turn(x[0], order);
        }
        for(int i = 0; i <= 8; i++){
            cout << color[cube[0][i]];
            if((i + 1) % 3 == 0) cout << '\n';
        }
    }
    return 0;
}