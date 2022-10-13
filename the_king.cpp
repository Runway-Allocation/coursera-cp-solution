#include<bits/stdc++.h>
using namespace std;

#define     int             long long
#define     fr(i,a,b)      for(int i=a;i<b;i++)
#define     rep(i,a,b)      for(int i=a;i>=b;i--)
#define     IOS             ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     mod             1000000007
#define    mp               make_pair
#define  pb            push_back

int32_t main()
{
    int r,c;
    cin>>r>>c;

    if(r==1 && c==1){
        cout<<0;
        return 0;
    }
    int x=(r/3)*2;
    int y=(c/3)*2;
    if(r%3==2)
        x++;
    if(c%3==2)
        y++;
    

    if(r==1)
        cout<<y;
    else if(c==1)
        cout<<x;
    else 
        cout<<x*c+(r-x)*y;
    return 0;
}
