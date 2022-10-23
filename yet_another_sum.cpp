#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << fixed << setprecision(15);
    vector<int> v(n);
    for (auto &it : v)
        cin >> it;

    long long s1 = 0;

    for(auto i:v)
        s1=s1+i;

    long double s2 = 0;
    for (auto it : v)
    {
        s2 += (1 / (long double)it);
    }

    cout << s2 + s1 << '\n';
}
