#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	//freopen(".inp","r",stdin);
	//freopen(".out","w",stdout);
	double a,b;
	char x;
	cin >> a >> x >> b ;
	if ( x == '+'){
		cout << setprecision(2) << fixed << ( a + b) ;
		return 0;
	} else
	if ( x == '-'){
		cout << setprecision(2) << fixed << ( a - b) ;
		return 0;
	} else
	if ( x == '*'){
		cout << setprecision(2) << fixed << ( a * b) ;
	} else
	if ( x == '/'){
		if ( b == 0){
			cout << "Math Error" ;
			return 0;
		} else 
		cout << setprecision(2) << fixed << ( a / b);
	}
}
