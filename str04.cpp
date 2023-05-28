#include <bits/stdc++.h>
#define ll long long int
#define str string
using namespace std;
str s ;
map <char,ll> mp ;
ll k;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("str04.inp","r",stdin);
	//freopen("str04.out","w",stdout);
	getline( cin , s) ;
    for ( ll i=0 ; i < s.size() ; i++) s[i] = tolower(s[i]) ;
	for ( ll i=0 ; i < s.size() ; i++) mp[s[i]]++ ;
	for ( char i='0' ; i <= 'z' ; i++)
        if ( mp[i] > 0) cout << i << " " << mp[i] << endl ;
}
