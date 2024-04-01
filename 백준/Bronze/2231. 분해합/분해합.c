int main() {
    int N;
    scanf("%d",&N);
    int sum=0;
    if(N>54) {
        for (int a = N - 54; a < N; a++) {
            int i=a;
            while (i != 0) {
                sum += i % 10;
                i /= 10;
            }
            if (sum + a == N) {
                printf("%d", a);
                return 0;
            }
            sum = 0;
            i = N;
        }
    }
    else if(9<N && N<55) {
        for (int c = 10; c < 55; c++) {
            if((c/10)+(c%10)+c==N) {
                printf("%d", c);
                return 0;
            }
        }
    }
    else if(1<=N && N<=9) {
        for (int c = 1; c < 10; c++) {
            if(2*c==N) {
                printf("%d", c);
                return 0;
            }
        }
    }
    printf("0");
}