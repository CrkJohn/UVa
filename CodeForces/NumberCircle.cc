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
#define err() freopen("err1.txt","w",stderr)
#define cls(a,val) memset(a,val,sizeof a)
#define INF  1e9;



using namespace std;

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpi;
typedef vector<vi> vvi;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef pair<ll, ll> pll;
typedef double ld;

template <typename T> ostream& operator<<(ostream& os, vector<T> v) {
    os << "[ ";for(auto e : v) os << e << " ";
    return os << "]";
}


 void print(vi arr,int n){
    cout << "YES" << endl;
    forn(i,n-1){
        cout <<  arr[i] << " ";
    }
    cout << arr[n-1] << endl;
 }

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(0);
    cout.precision(10);
    cout << fixed;
#ifdef LOCAL
    in();
    err();
#endif
    int n;
    while(cin >> n){
        vi arr(n);
        forn(i,n)cin >> arr[i];
        sort(all(arr));
        swap(arr[n-1],arr[n-2]); 
        int Ok = 1;
        if (arr[n-3] + arr[n-1] <= arr[n-2])Ok=0; 
        if (arr[0] + arr[n-2] <= arr[n-1])Ok=0;
        for(int i = 1 ; i < n-1  && Ok; ++i){
            if(arr[i-1]+arr[i+1]<=arr[i]){
                Ok = 0;
            }
        }
        if(Ok)print(arr,n);
        else cout << "NO" << endl;
    }

#ifdef LOCAL
    cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
#endif
    return 0;
} 

