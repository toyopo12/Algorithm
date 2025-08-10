#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    if (s == "SONGDO") cout << "HIGHSCHOOL";
    else if (s == "CODE") cout << "MASTER";
    else if (s == "2023") cout << "0611";
    else if (s == "ALGORITHM") cout << "CONTEST";
    return 0;
}