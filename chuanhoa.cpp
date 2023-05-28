#include <bits/stdc++.h>
#define ll long long int
#define str string
using namespace std;
void answer(str s){
	while ( s[0] == ' ') s.erase(0,1);
	while ( s[s.size()-1] == ' ') s.erase(s.size()-1,1);
	for ( ll i = 0 ; i < s.size() ; i++)
	if ( ( s[i] == ' ') && ( s[i+1] == ' ')){
		s.erase(i,1);
		i--;
	}
	cout << s << endl ; 
}
int main(){
	//freopen("chuanhoa.inp","r",stdin);
	//freopen("chuanhoa.out","w",stdout);
	ll n;
	cin >> n ;
	str s;
	cin.ignore();
	while ( n--){
		getline( cin , s);
		answer(s);
	}
}
