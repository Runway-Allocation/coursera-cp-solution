#include<bits/stdc++.h>
using namespace std;



int main()
{
    string s;
    cin>>s;

    reverse(s.begin(),s.end());
    int n=s.length();
    int carry=1;
    for(auto i:s){

        int x=i-'0'+carry;
        carry=x/10;
    }
    if(carry)
        cout<<n+1<<endl;
    else
        cout<<n<<endl;

    return 0;
    
}