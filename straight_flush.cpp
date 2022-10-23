#include<bits/stdc++.h>
using namespace std;



int main()
{
    vector<string> a(5);
    
    for(auto &i:a)
        cin>>i;

    char c=a[0][1];
    for(int i=1;i<5;i++){
        if(a[i][1]!=c){
            cout<<"No\n";
            return 0;
        }
    }
    vector<int> v(15);
    for(auto i:a){
        if(i[0]=='A')
            v[1]=v[14]=1;
        else if(i[0]=='J')
            v[11]=1;
        else if(i[0]=='T')
            v[10]=1;
        else if(i[0]=='Q')
            v[12]=1;
        else if(i[0]=='K')
            v[13]=1;
        else
            v[i[0]-'0']=1;
    }

    for(int i=1;i<=14;i++){
        int j=i;
        while(j<=14 && v[j]==1)
            j++;
        if(j-i==5){
            cout<<"Yes\n";
            return 0;
        }
        i=j;
    }
    cout<<"No\n";

    return 0;
    
}
