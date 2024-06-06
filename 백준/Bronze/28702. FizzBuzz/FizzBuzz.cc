#include <iostream>
#include <string>

using namespace std;

int main()
{ 
    string a,b,c;
    cin >> a >> b >> c;
    if(a=="FizzBuzz")
    {
        cout << "Fizz";
    }
    else if(a=="Fizz")
    {
        if(b=="Buzz" || c=="Buzz")
        {
            cout << "Fizz";
        }
        else
        {
            int num=stoi(b);
            if((num+2)%5==0)
            {
                cout << "FizzBuzz";
            }
            else
            {
                cout << "Fizz";
            }
        }
    }
    else if(a=="Buzz")
    {
        if(b=="Fizz")
        {
            int num=stoi(c);
            cout << num+1;
        }
        else
        {
            int num=stoi(b);
            cout << num+2;
        }
    }
    else
    {
        int num=stoi(a);
        if((num+3)%5==0)
        {
            cout << "Buzz";
        }
        else
        {
            cout << num+3;
        }
    }
    return 0;
}