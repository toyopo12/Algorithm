#include <stdio.h>
#include <string.h>

int main() {
    char arr[5][15];
    for (int a = 0; a < 5; a++) {
        scanf("%s", arr[a]);
    }
    for (int c = 0; c < 15; c++) {
        for (int b = 0; b < 5; b++)
            if(c<strlen(arr[b]))
                printf("%c", arr[b][c]);
    }
    return 0;
}