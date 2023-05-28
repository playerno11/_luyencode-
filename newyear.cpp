#include <bits/stdc++.h>
#define ll long long int
#define str string
using namespace std;
ll n,ans=0;
str s;
unordered_map <str,ll> mp ;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("newyear.inp","r",stdin);
	//freopen("newyear.out","w",stdout);
	cin >> n ;
	cin.ignore() ;
	for ( ll i=1 ; i <= n ; i++){
		getline( cin , s) ;
		if ( mp[s] == 0){
			ans++ ;
			mp[s]++ ;
		} else if ( mp[s] > 1){
			ans-- ;
			mp[s]-- ;
		}
	}
	cout << ans ;
}
