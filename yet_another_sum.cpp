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

    long long s1 = accumulate(v.begin(), v.end(), 0L);

    long double s2 = 0;
    for (auto it : v)
    {
        s2 += (1 / (long double)it);
    }

    cout << s2 + s1 << '\n';
}