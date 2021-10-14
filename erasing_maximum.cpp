#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for(int &i:a)
        cin>>i;

    int maxm=-1e9;
    int index=-1;
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]>maxm){
            maxm=a[i];
            count=1;
            index=i;
        }
        else if(a[i]==maxm){
            count++;
            if(count==3)
                index=i;
        }
    }

    for(int i=0;i<n;i++){
        if(i==index)
            continue;
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
    
}