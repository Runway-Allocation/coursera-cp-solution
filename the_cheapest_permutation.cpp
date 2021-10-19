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
    vector<vector<int>> a(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    }
    vector<int> v(n);
    for(int i=1;i<=n;i++)
        v[i-1]=i;
    vector<int> ans;
    int minmcost=1e9;
    int sum;
    do{
        sum=0;
        for(int i=0;i<n-1;i++)
            sum+=a[v[i]-1][v[i+1]-1];
        if(sum<minmcost){
            minmcost=sum;
            ans=v;
        }

    }while(next_permutation(v.begin(),v.end()));

    for(auto i:ans)
        cout<<i<<" ";
    return 0;
}
