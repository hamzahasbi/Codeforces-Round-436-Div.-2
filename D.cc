/*
	Author: Hamza Hasbi
	Copyrights: "h.hamza" ==> "www.hamzahasbi.me"
	Date: 25/09/2017 11:53:14
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
	vector<int>a(n);
	map<int,int>mp;
	for(int i =0;i<n;i++){
		cin >> a[i];
		mp[a[i]]++;
	}
	int count = 0;
	vector<int>need;
	for(int i = 1;i<=n;i++){
		if(!mp.count(i)){
			need.push_back(i);
			continue;
		}
		count += (mp[i] - 1);
		
	}
	int j = 0;
	cout << count << endl;
	map<int,bool>used;
	rep(i,0,n-1){
		//cout << a[i] << " " << mp[a[i]] << endl;
		if(mp[a[i]]>1){
			if(need[j] > a[i] && !used[a[i]]) {
				cout << a[i] << " ";
				used[a[i]] = true;
			}else{
				
				cout << need[j] << " ";
				++j;
				mp[a[i]]--;
				
			}
		}
		else{
			cout << a[i] << " ";
		}
	}
	cout << endl;
	return 0;
}
