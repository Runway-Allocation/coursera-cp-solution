#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main() {
    

    w(t){
        int n,a,b;
        cin>>n>>b>>a;
        vi a(n);
        for(int &i:a)
            cin>>i;

        long double ans=0;
        rep(i,0,n){
            int sum=0;
            rep(j,i,i+a-1)
                sum+=a[j];
            rep(j,i+a-1,i+b){
                sum+=a[j];
                ans=max(ans,sum/(double)(j-i+1))
            }
        }

        cout<<fixed<<setprecision(7)<<ans<<endl;
    }
    return 0;
}