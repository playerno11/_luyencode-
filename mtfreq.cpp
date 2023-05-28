#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const ll N = 1000005 ;
ll n,a[N],ans=0;
unordered_map <ll,ll> mp ;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("mtfreq.inp","r",stdin);
	//freopen("mtfreq.out","w",stdout);
	cin >> n ;
	for ( ll i=1 ; i <= n ; i++){
		cin >> a[i] ;
		mp[a[i]]++ ;
		if ( mp[a[i]] == 1) ans++ ;
	}
	cout << ans << endl ;
	for ( ll i=1 ; i <= n ; i++)
		if ( mp[a[i]] > 0){
			cout << a[i] << " " << mp[a[i]] << endl ;
			mp[a[i]] = 0 ;
		}
}
