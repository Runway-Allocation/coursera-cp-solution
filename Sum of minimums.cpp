#include<bits/stdc++.h>
using namespace std;

#define     int             long long

#define     fr(i,a,b)      for(int i=a;i<b;i++)

#define     rep(i,a,b)      for(int i=a;i>=b;i--)

#define     t()             int test;cin>>test;while(test--)

#define     IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#define     mod             1000000007

// #define     f               first

// #define     sec             second

// #define    mapii            std::map<int,int> map;

#define    mp               make_pair

#define  pb            push_back


int32_t main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int &i:a)
        cin>>i;

    long long ans=0;
    for(int i=0;i<n;i++){
        int minm=1e9;
        for(int j=i;j<n;j++){
            minm=min(minm,a[j]);
            ans+=minm;
        }
    }
    cout<<ans<<endl;
    return 0;
}
