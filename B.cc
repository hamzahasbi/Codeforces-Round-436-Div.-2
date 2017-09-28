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
	
	int n;
	cin >> n;
	string s;
	cin >> s;
	int ans = 0;
	for(int i=0;i<n;i++){
		map<char,bool>mp;
		int c = 0;
		for(int j=i;j<n;j++){
			if(islower(s[j])){
				if(!mp[s[j]]){
					c++;
					mp[s[j]] = true;
				}
			}
			else{
				break;
			}
		}
		ans = max(ans,c);
	}
	cout << ans << endl;
	return 0;
}
