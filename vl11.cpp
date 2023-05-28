#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen("vl11.inp","r",stdin);
	//freopen("vl11.out","w",stdout);
	string s;
	getline( cin , s);
	for ( ll i = 0 ; i < s.size() ; i++)
	if  ( ( int(s[i]) < 48) || ( int(s[i]) > 57)){
		s.erase(i,1);
		i--;
	}
	string st="";
	for ( ll i = s.size() - 1 ; i >= 0 ; i--) st+=s[i];
	while ( st[0] == '0') st.erase(0,1);
	cout << st ;
}
