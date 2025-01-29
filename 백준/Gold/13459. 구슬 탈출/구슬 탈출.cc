#include <iostream>
#include <queue>
#include <tuple>

using namespace std;

char board[12][12];
queue<tuple<pair<int, int>, pair<int, int>, int>> tq;
int N, M;
int rx, ry, bx, by;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> N >> M;
    int ball = 0;
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= M; j++) {
            cin >> board[i][j];
            if(board[i][j] == 'R') {
                rx = j;
                ry = i;
                ball++;
            }
            if(board[i][j] == 'B') {
                bx = j;
                by = i;
                ball++;
            }
            if(ball == 2) {
                tq.push({{ry, rx}, {by, bx}, 10});
                ball++;
            }
        }
    }
    while(!tq.empty()) {
        auto [ri, rj] = get<0>(tq.front());
        auto [bi, bj] = get<1>(tq.front());
        int goodtry = get<2>(tq.front());
        tq.pop();
        if(goodtry == 0) continue;
        int nry = ri;
        int nrx = rj;
        int nby = bi;
        int nbx = bj;
        // 위

        int redgoal = 0;
        int bluegoal = 0;

        // 한 세로축에 있으면
        if(rj == bj) {
            if(ri < bi) {
                for(int k = ri; k > 1; k--) {
                    if(board[k - 1][rj] == '#') {
                        nry = k;
                        break;
                    }
                    if(board[k - 1][rj] == 'O') {
                        redgoal = 1;
                        nrx = 0;
                        nry = 0;
                        break;
                    }
                }
                for(int k = bi; k > 1; k--) {
                    if(board[k - 1][bj] == '#' || k - 1 == nry) {
                        nby = k;
                        break;
                    }
                    if(board[k - 1][bj] == 'O') {
                        bluegoal = 1;
                        break;
                    }
                }
                if(redgoal == 1 && bluegoal == 0) {
                    cout << "1";
                    return 0;
                }
                else if(redgoal == 0 && bluegoal == 0) tq.push({{nry, rj}, {nby, bj}, goodtry - 1});
            }
            else {
                for(int k = bi; k > 1; k--) {
                    if(board[k - 1][bj] == '#') {
                        nby = k;
                        break;
                    }
                    if(board[k - 1][bj] == 'O') {
                        bluegoal = 1;
                        break;
                    }
                }
                for(int k = ri; k > 1; k--) {
                    if(board[k - 1][rj] == '#' || k - 1 == nby) {
                        nry = k;
                        break;
                    }
                    if(board[k - 1][rj] == 'O') {
                        redgoal = 1;
                        nrx = 0;
                        nry = 0;
                        break;
                    }
                }
                if(redgoal == 1 && bluegoal == 0) {
                    cout << "1";
                    return 0;
                }
                else if(redgoal == 0 && bluegoal == 0) tq.push({{nry, rj}, {nby, bj}, goodtry - 1});
            }
        }

        // 다른 세로축에 있으면
        else {
            for(int k = ri; k > 1; k--) {
                if(board[k - 1][rj] == '#') {
                    nry = k;
                    break;
                }
                if(board[k - 1][rj] == 'O') {
                    redgoal = 1;
                    nrx = 0;
                    nry = 0;
                    break;
                }
            }
            for(int k = bi; k > 1; k--) {
                if(board[k - 1][bj] == '#') {
                    nby = k;
                    break;
                }
                if(board[k - 1][bj] == 'O') {
                    bluegoal = 1;
                    break;
                }
            }
            if(redgoal == 1 && bluegoal == 0) {
                cout << "1";
                return 0;
            }
            else if(redgoal == 0 && bluegoal == 0) tq.push({{nry, rj}, {nby, bj}, goodtry - 1});
        }

        // 아래

        nry = ri;
        nrx = rj;
        nby = bi;
        nbx = bj;
        redgoal = 0;
        bluegoal = 0;

        // 한 세로축에 있으면
        if(rj == bj) {
            if(ri > bi) {
                for(int k = ri; k < N; k++) {
                    if(board[k + 1][rj] == '#') {
                        nry = k;
                        break;
                    }
                    if(board[k + 1][rj] == 'O') {
                        redgoal = 1;
                        nrx = 0;
                        nry = 0;
                        break;
                    }
                }
                for(int k = bi; k < N; k++) {
                    if(board[k + 1][bj] == '#' || k + 1 == nry) {
                        nby = k;
                        break;
                    }
                    if(board[k + 1][bj] == 'O') {
                        bluegoal = 1;
                        break;
                    }
                }
                if(redgoal == 1 && bluegoal == 0) {
                    cout << "1";
                    return 0;
                }
                else if(redgoal == 0 && bluegoal == 0) tq.push({{nry, rj}, {nby, bj}, goodtry - 1});
            }
            else {
                for(int k = bi; k < N; k++) {
                    if(board[k + 1][bj] == '#') {
                        nby = k;
                        break;
                    }
                    if(board[k + 1][bj] == 'O') {
                        bluegoal = 1;
                        break;
                    }
                }
                for(int k = ri; k < N; k++) {
                    if(board[k + 1][rj] == '#' || k + 1 == nby) {
                        nry = k;
                        break;
                    }
                    if(board[k + 1][rj] == 'O') {
                        redgoal = 1;
                        nrx = 0;
                        nry = 0;
                        break;
                    }
                }
                if(redgoal == 1 && bluegoal == 0) {
                    cout << "1";
                    return 0;
                }
                else if(redgoal == 0 && bluegoal == 0) tq.push({{nry, rj}, {nby, bj}, goodtry - 1});
            }
        }

        //다른 세로축에 있으면
        else {
            for(int k = ri; k < N; k++) {
                if(board[k + 1][rj] == '#') {
                    nry = k;
                    break;
                }
                if(board[k + 1][rj] == 'O') {
                    redgoal = 1;
                    nrx = 0;
                    nry = 0;
                    break;
                }
            }
            for(int k = bi; k < N; k++) {
                if(board[k + 1][bj] == '#') {
                    nby = k;
                    break;
                }
                if(board[k + 1][bj] == 'O') {
                    bluegoal = 1;
                    break;
                }
            }
            if(redgoal == 1 && bluegoal == 0) {
                cout << "1";
                return 0;
            }
            else if(redgoal == 0 && bluegoal == 0) tq.push({{nry, rj}, {nby, bj}, goodtry - 1});
        }

        // 오른쪽

        nry = ri;
        nrx = rj;
        nby = bi;
        nbx = bj;
        redgoal = 0;
        bluegoal = 0;

        // 한 가로축에 있으면
        if(ri == bi) {
            if(rj > bj) {
                for(int k = rj; k < M; k++) {
                    if(board[ri][k + 1] == '#') {
                        nrx = k;
                        break;
                    }
                    if(board[ri][k + 1] == 'O') {
                        redgoal = 1;
                        nrx = 0;
                        nry = 0;
                        break;
                    }
                }
                for(int k = bj; k < M; k++) {
                    if(board[bi][k + 1] == '#' || k + 1 == nrx) {
                        nbx = k;
                        break;
                    }
                    if(board[bi][k + 1] == 'O') {
                        bluegoal = 1;
                        break;
                    }
                }
                if(redgoal == 1 && bluegoal == 0) {
                    cout << "1";
                    return 0;
                }
                else if(redgoal == 0 && bluegoal == 0) tq.push({{ri, nrx}, {bi, nbx}, goodtry - 1});
            }
            else {
                for(int k = bj; k < M; k++) {
                    if(board[bi][k + 1] == '#') {
                        nbx = k;
                        break;
                    }
                    if(board[bi][k + 1] == 'O') {
                        bluegoal = 1;
                        break;
                    }
                }
                for(int k = rj; k < M; k++) {
                    if(board[ri][k + 1] == '#' || k + 1 == nbx) {
                        nrx = k;
                        break;
                    }
                    if(board[ri][k + 1] == 'O') {
                        redgoal = 1;
                        nrx = 0;
                        nry = 0;
                        break;
                    }
                }
                if(redgoal == 1 && bluegoal == 0) {
                    cout << "1";
                    return 0;
                }
                else if(redgoal == 0 && bluegoal == 0) tq.push({{ri, nrx}, {bi, nbx}, goodtry - 1});
            }
        }

        // 다른 가로축에 있으면
        else {
            for(int k = rj; k < M; k++) {
                if(board[ri][k + 1] == '#') {
                    nrx = k;
                    break;
                }
                if(board[ri][k + 1] == 'O') {
                    redgoal = 1;
                    nrx = 0;
                    nry = 0;
                    break;
                }
            }
            for(int k = bj; k < M; k++) {
                if(board[bi][k + 1] == '#') {
                    nbx = k;
                    break;
                }
                if(board[bi][k + 1] == 'O') {
                    bluegoal = 1;
                    break;
                }
            }
            if(redgoal == 1 && bluegoal == 0) {
                cout << "1";
                return 0;
            }
            else if(redgoal == 0 && bluegoal == 0) tq.push({{ri, nrx}, {bi, nbx}, goodtry - 1});
        }

        // 왼쪽

        nry = ri;
        nrx = rj;
        nby = bi;
        nbx = bj;
        redgoal = 0;
        bluegoal = 0;

        // 같은 가로축에 있으면
        if(ri == bi) {
            if(rj < bj) {
                for(int k = rj; k > 1; k--) {
                    if(board[ri][k - 1] == '#') {
                        nrx = k;
                        break;
                    }
                    if(board[ri][k - 1] == 'O') {
                        redgoal = 1;
                        nrx = 0;
                        nry = 0;
                        break;
                    }
                }
                for(int k = bj; k > 1; k--) {
                    if(board[bi][k - 1] == '#' || k - 1 == nrx) {
                        nbx = k;
                        break;
                    }
                    if(board[bi][k - 1] == 'O') {
                        bluegoal = 1;
                        break;
                    }
                }
                if(redgoal == 1 && bluegoal == 0) {
                    cout << "1";
                    return 0;
                }
                else if(redgoal == 0 && bluegoal == 0) tq.push({{ri, nrx}, {bi, nbx}, goodtry - 1});
            }
            else {
                for(int k = bj; k > 1; k--) {
                    if(board[bi][k - 1] == '#') {
                        nbx = k;
                        break;
                    }
                    if(board[bi][k - 1] == 'O') {
                        bluegoal = 1;
                        break;
                    }
                }
                for(int k = rj; k > 1; k--) {
                    if(board[ri][k - 1] == '#' || k - 1 == nbx) {
                        nrx = k;
                        break;
                    }
                    if(board[ri][k - 1] == 'O') {
                        redgoal = 1;
                        nrx = 0;
                        nry = 0;
                        break;
                    }
                }
                if(redgoal == 1 && bluegoal == 0) {
                    cout << "1";
                    return 0;
                }
                else if(redgoal == 0 && bluegoal == 0) tq.push({{ri, nrx}, {bi, nbx}, goodtry - 1});
            }
        }

        // 다른 가로축에 있으면
        else {
            for(int k = rj; k > 1; k--) {
                if(board[ri][k - 1] == '#') {
                    nrx = k;
                    break;
                }
                if(board[ri][k - 1] == 'O') {
                    redgoal = 1;
                    nrx = 0;
                    nry = 0;
                    break;
                }
            }
            for(int k = bj; k > 1; k--) {
                if(board[bi][k - 1] == '#') {
                    nbx = k;
                    break;
                }
                if(board[bi][k - 1] == 'O') {
                    bluegoal = 1;
                    break;
                }
            }
            if(redgoal == 1 && bluegoal == 0) {
                cout << "1";
                return 0;
            }
            else if(redgoal == 0 && bluegoal == 0) tq.push({{ri, nrx}, {bi, nbx}, goodtry - 1});
        }
    }
    cout << "0";
    return 0;
}