#include <stdio.h>
#include <string.h>

int main() {
    int t,money;
    int A=0,B=0,C=0,D=0;
    scanf("%d",&t);
    for(int O=0;O<t;O++) {
        scanf("%d",&money);
        for (int a = money; a > 24; a -= 25) {
            A++;
        }
        for (int b = money - 25 * A; b > 9; b -= 10) {
            B++;
        }
        for (int c = money - 25 * A - 10 * B; c > 4; c -= 5) {
            C++;
        }
        for (int d = money - 25 * A - 10 * B - 5 * C; d > 0; d--) {
            D++;
        }
        printf("%d %d %d %d\n", A, B, C, D);
        A=0,B=0,C=0,D=0;
    }
    return 0;
}