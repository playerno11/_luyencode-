#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll n,a;
unordered_map <ll,ll> mp;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("search3.inp","r",stdin);
	//freopen("search3.out","w",stdout);
	cin >> n >> m ;
	for ( ll i=1 ; i <= n ; i++){
		cin >> a ;
		if ( mp[a] == 0) mp[a] = i ;
	}
	for ( ll i=1 ; i <= m ; i++){
		cin >> a ;
		cout << mp[a] << " " ;
	}
}
