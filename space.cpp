#include <bits/stdc++.h>
#define ll long long int
#define str string
using namespace std;
void answer(str s){
	ll d = 0 ;
	while ( s[0] == ' ') s.erase(0,1);
	while ( s[s.size()-1] == ' ') s.erase(s.size()-1,1);
	for ( ll i = 0 ; i < s.size() ; i++)
	if ( ( s[i] == ' ') && ( s[i+1] == ' ')){
		s.erase(i,1);
		i--;
	}
	for ( ll i = 0 ; i < s.size() ; i++)
	if ( s[i] == ' ') d++;
	cout << d << endl ;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("space.inp","r",stdin);
	//freopen("space.out","w",stdout);
	ll n;
	cin >> n ;
	str s;
	cin.ignore();
	while ( n--){
		getline( cin , s);
		answer(s);
	}
}
