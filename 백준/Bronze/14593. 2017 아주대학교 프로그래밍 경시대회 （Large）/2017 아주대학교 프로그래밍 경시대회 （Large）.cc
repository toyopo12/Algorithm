#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
    int n;
    int score[10010];
    int tryy[10010];
    int upload[10010];
    int fin=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&score[i],&tryy[i],&upload[i]);
    }
    int maxscore=score[0];
    int maxtryy=tryy[0];
    int maxupload=upload[0];
    for(int i=1;i<n;i++)
    {
        if(maxscore<score[i])
        {
            maxscore=score[i];
            maxtryy=tryy[i];
            maxupload=upload[i];
            fin=i;
        }
        else if(maxscore==score[i])
        {
            if(maxtryy>tryy[i])
            {
                maxscore=score[i];
                maxtryy=tryy[i];
                maxupload=upload[i];
                fin=i;
            }
            else if(maxtryy==tryy[i])
            {
                if(maxupload>upload[i])
                {
                    maxscore=score[i];
                    maxtryy=tryy[i];
                    maxupload=upload[i];
                    fin=i;
                }
            }    
        }
    }
    printf("%d",fin+1);
    return 0;
}