	#include <bits/stdc++.h>

	#define mp make_pair
	#define mt make_tuple
	#define fi first
	#define se second
	#define pb push_back
	#define all(x) (x).begin(), (x).end()
	#define rall(x) (x).rbegin(), (x).rend()
	#define forn(i, n) for (int i = 0; i < (int)(n); ++i)
	#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)
	#define ford(i, n) for (int i = (int)(n) - 1; i >= 0; --i)
	#define fore(i, a, b) for (int i = (int)(a); i <= (int)(b); ++i)
	#define in() freopen("in.txt","r",stdin)
	#define out() freopen("out.txt","w",stdout)
	#define err() freopen("err.txt","w",stderr)
	#define si(a) ((int)a.size())

	using namespace std;

	typedef pair<int, int> pii;
	typedef vector<int> vi;
	typedef vector<pii> vpi;
	typedef vector<vi> vvi;
	typedef long long ll;
	typedef vector<ll> vll;
	typedef vector<vll> vvll;
	typedef pair<ll,ll> pi64;
	typedef double ld;
	typedef vector<string> vs;


	short isMagic;

	string  splitRegex(string cast){
		 //Return only alphabet
			vs matrix;
			string splitJoin = "";
			for(char c : cast){
					if ('a'<=c && c<='z')splitJoin.pb(c);
					if ('A'<=c && c<='Z')splitJoin.pb(c);
			}
			int len = sqrt(si(splitJoin));
			if((sqrt(si(splitJoin)) - (int) sqrt(si(splitJoin)) > 0)){
					isMagic = false;
					return "";
			}
			int i = 0;
			string spl  = "";
			for( char  c  : splitJoin){
						spl.pb(c);
						i++;
						if(i == len ){
								i = 0 ;
								matrix.pb(spl);
								spl = "";
						}
			}

			/*
			for(auto s : matrix){
					cout << s << endl;
			}

			*/
			return splitJoin;
	}




	int main() {
			ios::sync_with_stdio(false);
			cin.tie(nullptr);
			cout.precision(10);
			cout << fixed;
			int lines;
			cin >> lines;
			string str;
			getline(cin,str);
			for1(k,lines){
					getline(cin,str);
					isMagic = true;
					string result = splitRegex(str);
					if(isMagic){
							int j = result.length() -1 ;
							int  i = 0;
							while(i<j){
								if(result[i++]!=result[j--]){
									 isMagic = false;
									 break;
								}
							}
					}
					cout << "Case #"<< k << ":" << endl;
					if(!isMagic){
						cout << "No magic :(" << endl;
					}else{
						cout << ((int)sqrt(si(result))) << endl;
					}
			}
			cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
			return 0;
	}
