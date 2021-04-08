#include <bits/stdc++.h>
using namespace std;
int main()
{
    string inp;
    cin >> inp;
    int cnt = 0;
    for (auto &i : inp)
        if (i == '1')
            cnt++;
    inp.push_back('0' + (cnt & 1));
    cout << inp;
    return 0;
}