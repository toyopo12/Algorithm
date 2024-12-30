#include <iostream>

using namespace std;

int counting = 4;

int checking(int ax, int ay, int bx, int by, int cx, int cy, int dx, int dy) {
    // 점
    if((bx == cx && by == cy) || (ax == dx && ay == dy)) return 0;
    if((bx == cx && ay == dy) || (ax == dx && by == cy)) return 0;
    // 안 만남
    if(by < cy || ay > dy) return 3;
    if(bx < cx || ax > dx) return 3;
    // 아;;;;;;;

    // 선
    if(by == cy && cx < bx && ax < dx) return 1;
    if(bx == cx && cy < by && ay < dy) return 1;
    if(ay == dy && cx < bx && ax < dx) return 1;
    if(ax == dx && cy < by && ay < dy) return 1;
    // 면
    return 2;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    while(counting--) {
        int ax, ay, bx, by, cx, cy, dx, dy;
        cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy;
        int judge = checking(ax, ay, bx, by, cx, cy, dx, dy);
        if(judge == 2) cout << "a\n";
        else if(judge == 1) cout << "b\n";
        else if(judge == 0) cout << "c\n";
        else cout << "d\n";
    }
    return 0;
}