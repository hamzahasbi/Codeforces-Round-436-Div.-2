/*
	Author: Hamza Hasbi
	Copyrights: "h.hamza" ==> "www.hamzahasbi.me"
	Date: 25/09/2017 11:34:45
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
	map<int,int>mp;
	for(int i=0;i<n;i++){
		int a;
		cin >> a;
		mp[a]++;
	}
	if(mp.size()!=2) cout << "NO" << endl;
	else{
		bool f = true;
		//cout << "YES" << endl;
		for(auto c :mp){
			f &= c.second == n/2;
		}
		if(f){
		cout << "YES" << endl;
		for(auto c :mp){
			cout << c.first << " ";
		}
		cout << endl;
		}else cout << "NO" << endl;
	}
	return 0;
}
