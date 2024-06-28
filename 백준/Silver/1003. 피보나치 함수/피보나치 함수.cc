#include <iostream>

using namespace std;

int a=0;
int b=0;

typedef struct hello
{
    int a;
    int b;
    int sum;
}hi;

hi check[41];

int fibonacci(int n)
{
    if(check[n].sum!=0)
    {
        a+=check[n].a;
        b+=check[n].b;
        return 0;
    }
    else if(n==0)
    {
        check[0].a++;
        check[0].sum++;
        a++;
        return 0;
    }
    else if(n==1)
    {
        check[1].b++;
        check[1].sum++;
        b++;
        return 0;
    }
    else
    {
        if(check[n-1].sum!=0 && check[n-2].sum!=0)
        {
            check[n].a=check[n-1].a+check[n-2].a;
            check[n].b=check[n-1].b+check[n-2].b;
            check[n].sum=check[n-1].sum+check[n-2].sum;
        }
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin >> n;
        fibonacci(n);
        cout << a << " " << b << '\n';
        a=0;
        b=0;
    }
    return 0;
}