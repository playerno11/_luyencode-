#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll nt(ll n){
	if ( n < 2) return 0;
	for ( ll i = 2 ; i <= sqrt(n) ; i++)
	if ( n % i == 0) return 0;
	return 1;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("vl11.inp","r",stdin);
	//freopen("vl11.out","w",stdout);
	ll n;
	cin >> n ;
	if ( nt(n) == 1){
		cout << "YES" ;
		return 0;
	}
	cout << "NO" ;
}
