long long sum(int *a, int n) {
	long long ans = 0;
    for(int A=0;A<n;A++)
    {
        ans+=a[A];
    }
	return ans;
}
