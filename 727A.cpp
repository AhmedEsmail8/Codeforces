#include <bits/stdc++.h>
#define ll long long
#define pb push_back

using namespace std;

int main()
{
    vector <ll> v;
    ll a,b; cin>>a>>b;
    v.pb(b);
    while (b>a){
        if (b%2==0)
            b/=2;
        else if ((b-1)%10==0)
            b/=10;
        else
            break;
        v.pb(b);
    }
    if (v.back()!=a)
        cout<< "NO";
    else{
        cout<<"YES\n"<<v.size()<<'\n';
        for (ll i=v.size()-1 ; i>=0 ; i--)
            cout<<v[i]<<' ';
    }
    return 0;
}
