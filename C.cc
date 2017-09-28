/*
	Author: Hamza Hasbi
	Copyrights: "h.hamza" ==> "www.hamzahasbi.me"
	Date: 25/09/2017 11:34:44
*/
#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define ull unsigned long long
#define uld unsigned long double
#define ui unsigned int
#define ud unsigned double
#define uf unsigned float
#define pi 2*acos(0.0)
#define module cin.ignore()
#define rep(i,l,r) for(auto i=l;i<=r;i++)
#define range(x,y) for(auto x:y)
//inline long longlcm(ll a,ll b) {return a*b/__gcd(a,b);}
//inline long long gcd(ll a,ll b) {return 1LL*b == 0 ? a : gcd(1LL*b, a*1LL % b*1LL);}
using namespace std;

int main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a,f,k;
	long long b;
	cin >> a >> b >> f >> k;
	long ans = 0;
	long fuel = b;
	bool state = true;
	while(k){
		
		if(state){
			if(fuel < f){
				cout << -1 << endl;
				return 0;
			}else{
				fuel -= f;
				int c = (k==1) ? a-f : 2*(a-f);
				if(fuel < c){
					fuel = b;
					fuel -= (a - f);
					ans++;
				}else{
					fuel -= (a - f);
				}
			}
		}
		else{
			if(fuel < (a - f)){
				cout << -1 << endl;
				return 0;
			}else{
				fuel -= (a - f);
				int c = ( k == 1) ? f : 2*f;
				if(fuel < c){
					fuel = b;
					fuel -= f;
					ans++;
				}else{
					fuel -= f;
				}
			}
		}
		//cout << fuel << endl;
		state = !state;
		k--;
	}
	
	if(fuel < 0) cout << -1 << endl;
	else cout << ans << endl;
	return 0;
}
