#include <bits/stdc++.h>
using namespace std;
string GenerateTheString(int n)
{
    string str = "";
    if (n % 2)
    {
        while (n-- > 0)
        {
            str += "a";
        }
    }
    else
    {
        while (--n > 0)
        {
            str += "a";
        }
        str += "b";
    }
    return str;
}
int main()
{
    int n;
    cin >> n;
    string ans = GenerateTheString(n);
    cout << ans << endl;
    return 0;
}