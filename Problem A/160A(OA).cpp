//Author : Dark Coder 
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
using uint = unsigned int;
using ull = unsigned long long;
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int main() {
    fastio();

    vector<int> v;
    int n,x;
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        cin >> x;
        v.pb(x);
    }
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    int sum1 = 0, sum2 = 0, ans = 1;
    for(auto x : v)
    {
        sum2 += x;
    }
    for(int i = 0; i < n; i++){
		sum1 += v[i];
		sum2 -= v[i];
		if(sum1 > sum2){
			ans = i + 1;
			break;
		}
	}

    cout << ans << endl;

    return 0;
}
