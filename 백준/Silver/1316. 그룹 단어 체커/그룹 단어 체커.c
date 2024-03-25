#include <stdio.h>
#include <string.h>

int main(void)
{
    int x;
    int i=0;
    scanf("%d",&x);
    char arr[110];

    for(int b=0;b<x;b++) {
        scanf("%s", arr);
        int hut[27]={0, };
        for (int a = 0; a < strlen(arr); a++) {
            hut[arr[a] - 97]++;
            if (a!=0 && arr[a] == arr[a - 1]){
                hut[arr[a] - 97]--;
            }
            else if(hut[arr[a]-97]==2){
                i--;
                break;
            }
        }
        i++;
    }
    printf("%d",i);
}