#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll n,m,a;
unordered_map <ll,ll> mp ;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("search1.inp","r",stdin);
	//freopen("search1.out","w",stdout);
	cin >> n >> m ;
	for ( ll i=1 ; i <= n ; i++){
		cin >> a ;
		mp[a] = 1 ;
	}
	for ( ll i=1 ; i <= m ; i++){
		cin >> a ;
		cout << mp[a] ;
	}
}
