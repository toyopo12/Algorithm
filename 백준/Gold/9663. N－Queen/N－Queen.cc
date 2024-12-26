#include <iostream>
#include <vector>

using namespace std;

int visited[16];
int sum;
int n;

void good(int x) {
    if(x == n) sum++;
    else {
        for(int i = 0; i < n; i++) {
            bool check = true;
            visited[x] = i;
            for(int j = 0; j < x; j++) {
                if(visited[j] == i || visited[j] == i + x - j || visited[j] == i - x + j) {
                    check = false;
                    break;
                }
            }
            if(check) good(x + 1);
        }
    }
}

int main()
{
    cin >> n;
    good(0);
    cout << sum;
    return 0;
}