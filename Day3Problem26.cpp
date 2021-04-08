#include <bits/stdc++.h>
using namespace std;
bool isRepeating(int num)
{
    if (num == 0)
        return true;
    if (num < 0)
        return false;
    set<int> v;
    while (num > 0)
    {
        int rem = num % 10;
        v.insert(rem);
        num /= 10;
    }
    return v.size() == 1;
}
int main()
{
    int num;
    cin >> num;
    if (isRepeating(num))
    {
        cout << "true" << endl;
    }
    else
        cout << "false" << endl;
    return 0;
}