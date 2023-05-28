#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("vl10.inp","r",stdin);
	//freopen("vl10.our","w",stdout);
	string s;
	getline( cin , s );
	for ( ll i = 0 ; i < s.size() ; i++)
	if ( ( int(s[i]) < 48) || ( int(s[i]) > 57)){
		s.erase(i,1);
		i--;
	}
	cout << s.size() ;
}
