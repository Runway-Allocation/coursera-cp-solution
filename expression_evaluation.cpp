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
    string s;
    cin>>s;
    string a="";
    int i=0,n=s.length();
    while(i<n && s[i]>='0' && s[i]<='9'){
        a+=s[i];
        i++;
    }
    long long ans=stoi(a);
    string b="";
    char prevop='*';

    while(i<n){
        if(s[i]>='0' && s[i]<='9')
            b+=s[i];
        else{
            if(prevop=='*'){
                prevop=s[i++];
                continue;
            }
            if(prevop=='+')
                ans+=stoi(b);
            else
                ans-=stoi(b);
            prevop=s[i];
            b="";
        }
        i++;
    }
    if(b==""){
        cout<<ans<<endl;
        return 0;
    }
    if(prevop=='+')
        ans+=stoi(b);
    else
        ans-=stoi(b);
    cout<<ans<<endl;

    return 0;
}
