#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	double a,b;
	cin >> a >> b ;
	if ( a == 0){
		if ( b == 0){
			cout << "INF";
			return 0;
		} else {
			cout << "NO";
			return 0;
		}
	} else {
		double x = -b / a ;
		cout << setprecision(2) << fixed << x ;
	}
}
