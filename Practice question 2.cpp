#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL);    
    int t;
    cin >> t;
    int test = 1; 
    while (t--) {
    double n, p;
    cin >> n >> p;
   double ex=(n-1)/n ;
   double ba=p/100.0; 
   double pnew = pow(ba, ex);
    double ans = (pnew -  ba)*100;
    cout << "Case #" << test << ": " << fixed << setprecision(15) << ans << "\n"; 
    test++;
    }
    
    return 0;
}
