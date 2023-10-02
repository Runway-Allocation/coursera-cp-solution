#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){

    int n;
    cin >> n;
    vector<double> a(n), b(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n; ++i)
        cin >> b[i];

    bool equal_sum = false;
    bool sum_a_larger = false;

    double eps = 1e-6;
    double s1 = accumulate(a.begin(), a.end(), 0.0);
    double s2 = accumulate(b.begin(), b.end(), 0.0);

    if (abs(s1-s2) < eps)
        equal_sum = true;
    
    if (s2 < s1 - eps)
        sum_a_larger = true;

    if (equal_sum)
        cout << "SUM(A)=SUM(B)" << endl;
    else {
        if (sum_a_larger)
            cout << "SUM(A)>SUM(B)" << endl;
        else
        cout << "SUM(A)<SUM(B)" << endl;
    }

    return 0;
}