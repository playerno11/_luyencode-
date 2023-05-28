#include <bits/stdc++.h>
#define ll long long int
using namespace std;
const ll N = 100005;
ll n,a[N],k,ans=0,m=-1,c=1;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("wosub.inp","r",stdin);
	//freopen("wosub.out","w",stdout);
	cin >> n ;
	for ( ll i=1 ; i <= n ; i++) cin >> a[i] ;
	cin >> k ;
	for ( ll d=1 ; d <= n ; d++){
		ans += a[d] ;
		while ( ans > k){
			ans -= a[c] ;
			c++ ;
		}
		if ( ans == k) m = max( m , ( d - c + 1)) ;
	}
	cout << m ;
}
