int main()
{
    int N,M;
    int min=32;
    int score=0;
    int A=0,B=0;
    scanf("%d %d",&N,&M);
    char board[51][51];

    //문제의 판 만들기
    for(int a=0;a<N;a++)
    {
        for(int b=0;b<M;b++)
        {
            scanf(" %c",&board[a][b]);
        }
    }

    //8x8크기로 모든 경우 다 쪼갠 뒤 색칠 필요 칸 개수 구하기
    while(1)
    {
        for(int a=A;a<A+8;a++)
        {
            for(int b=B;b<B+8;b++)
            {
                if(a%2==0)
                {
                    if(b%2==0)
                    {
                        if(board[a][b]=='B')
                        {
                            score++;
                        }
                    }
                    else if(b%2==1)
                    {
                        if(board[a][b]=='W')
                        {
                            score++;
                        }
                    }
                }
                else if(a%2==1)
                {
                    if(b%2==0)
                    {
                        if(board[a][b]=='W')
                        {
                            score++;
                        }
                    }
                    else if(b%2==1)
                    {
                        if(board[a][b]=='B')
                        {
                            score++;
                        }
                    }
                }
            }
        }

        //처음 판이 W,B 상관없게 퉁치기
        if(score>=32)
        {
            score=64-score;
        }

        //색칠 칸수가 이전보다 적으면 최소값으로 저장
        if(score<min)
        {
            min=score;
        }

        //마지막까지 했으면 탈출
        if(A==N-8&&B==M-8)
        {
            break;
        }

        //다른 8x8로 바꾸기
        if(B==M-8)
        {
            A++;
            B=0;
        }
        else if(B!=M-8)
            B++;
        score=0;
    }
    printf("%d",min);
    return 0;
}