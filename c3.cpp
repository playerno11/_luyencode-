#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll n,s,a,ans=0;
unordered_map <ll,ll> mp;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	//freopen("c3.inp","r",stdin);
    //freopen("c3.out","w",stdout);
    cin >> n >> s ;
    for ( ll i=1 ; i <= n ; i++){
        cin >> a ;
        mp[a]++ ;
        ans += mp[ s - a*a] ;
    }
    cout << ans ;
}
