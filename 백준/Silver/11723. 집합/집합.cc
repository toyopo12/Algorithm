#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int S[21]={0};
    cin >> n;
    for(int a=0;a<n;a++)
    {
        char arr[6];
        int N;
        scanf("%s",arr);
        if(arr[0]=='r')
        {
            scanf("%d",&N);
            S[N]=0;
        }
        else if(arr[0]=='c')
        {
            scanf("%d",&N);
            if(S[N]==0)
            {
                printf("0\n");
            }
            else
            {
                printf("1\n");
            }
        }
        else if(arr[0]=='t')
        {
            scanf("%d",&N);
            if(S[N]==0)
            {
                S[N]=1;
            }
            else
            {
                S[N]=0;
            }
        }
        else if(arr[0]=='e')
        {
            fill_n(S,21,0);
        }
        else if(arr[0]=='a' && arr[1]=='l')
        {
            fill_n(S,21,1);
        }
        else
        {
            scanf("%d",&N);
            S[N]=1;
        }
    }
    return 0;
}