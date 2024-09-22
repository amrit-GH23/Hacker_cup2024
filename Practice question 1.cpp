#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);
    int t;
    cin>>t;
    int test=1;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll a[n];
        ll mini=INT_MAX;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            mini=min(mini,a[i]);
        }
        ll ans=0;
        if(n>=2)
        ans=(n-2)*2*mini;
        ans+=mini;
        if(ans<=k){
            cout<<"Case #"<<test<<": YES\n";
        }
        else{
            cout<<"Case #"<<test<<": NO\n";
        }
        test++;
    }
    return 0;
}
