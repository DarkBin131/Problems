
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

    int t;
    cin >> t;
    ll p = 0;
    ll h = 0;
    while(t--)
    {
        int x, y;
        cin >> x >> y;
        p -= x;
        p += y;
        if(p>h)
        {
            h = p;
        }
    }
    cout << h << endl;

    return 0;
}
