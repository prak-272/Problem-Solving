#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define endl '\n'

#define ld long double
#define ull unsigned long long
 
const ll MOD = 1e9 + 7;
const ll INF = LLONG_MAX >> 1;

#ifndef ONLINE_JUDEGE
#define debug(a) cerr << #a << " "; print(a); cerr << endl;
#else
#define debug(a)
#endif

void print(int a){ cerr << a;}
void print(ll a ){cerr <<  a;}
void print(ld a ){cerr << a;}
void print(string a){ cerr << a;}
void pirnt(bool a ){ cerr << a;}
void print(float a){cerr << a;}
void print( double a){ cerr << a;}
void print( char a) { cerr << a; }
void print(ull a){cerr << a;}

template<class t,class v> void print( pair<t,v> p);
template<class t> void print( vector<t> v1);
template<class t> void print( set<t> s);
template<class t,class v> void print( map<t,v> mp);
template<class t> void print( multiset<t> ms);
template<class t,class v>void print(pair<t,v> p){ cerr << "{" << p.first << "," << p.second << "}"; }
template<class t>void print( vector<t> v1){ cerr << "["; for(auto i:v1){ print(i); cerr << " ";} cerr << "]";}
template<class t> void print(set<t> s){ cerr << "["; for(auto i:s){print(i); cerr << " ";} cerr << "]";}
template<class t,class v> void print(map<t,v> mp){ cerr << "["; for(auto i:mp){ print(i); cerr << " ";} cerr << "]";}
template<class t> void print(multiset<t> ms){ cerr << "["; for(auto i:ms) { print(i); cerr << " "; } cerr << "]";}


void solve()
{
	ll n,q; cin >> n >> q;

	vector<ll> b(n);
	for(ll i=0;i<n;i++)cin >> b[i];

    sort(b.begin(),b.end());

	while(q--){
		ll x; cin >> x;

		cout << n-(lower_bound(b.begin(),b.end(),x) - b.begin());
		cout << endl;
	}
     

}
 
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
     
    #ifndef ONLINE_JUDGE
     freopen("Error.txt" , "w" ,stderr);
    #endif 
      
 
    ll tc;
    tc =1;
 
    while(tc--){
    
        solve();
 
    }
 
 
}

