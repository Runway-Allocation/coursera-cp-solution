#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    double x ;
    double suma=0.0,sumb=0.0;
    for(int i=0;i<n;i++){
        cin>>x;
        suma+=x;
    }
    for(int i=0;i<n;i++){
        cin>>x;
        sumb+=x;
    }

    if(abs(suma-sumb)<1e-6)
        cout<<"SUM(A)=SUM(B)";
    else if(suma>sumb)
        cout<<"SUM(A)>SUM(B)";
    else
        cout<<"SUM(A)<SUM(B)";

    return 0;
}