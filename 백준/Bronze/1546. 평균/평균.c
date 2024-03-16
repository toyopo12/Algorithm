int main() {
    int N;
    int M=0;
    scanf("%d",&N);
    int arr[N];
    for(int x=0;x<N;x++)
    {
        scanf("%d",&arr[x]);
    }
    for(int y=0;y<N;y++)
    {
        if(M<arr[y])
            M=arr[y];
    }
    float c=0;
    for(int a=0;a<N;a++)
    {
        c += ((float)arr[a]/M)*100;
    }
    printf("%f",c/N);
    return 0;
}