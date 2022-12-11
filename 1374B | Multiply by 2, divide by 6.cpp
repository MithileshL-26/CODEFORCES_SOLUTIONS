#include "bits/stdc++.h"
#include "iostream"
#include "vector"
#include "map"
#include "unordered_map"
#include "utility"
#include "algorithm"
#include "math.h"
#include "iterator"

using namespace std;

#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define PI 3.141592653589793238462
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int, int> p;
typedef vector< pair<int, int> > v_p;

void solve()
{
    int tc;
    cin >> tc;
    
    while(tc--)
    {
        int N;
        cin >> N;
        
        int ans = 0;
        
        if(N == 1)
        {
            cout << 0 << nline;
            continue;    
        }
        while(N != 1)
        {
            if(N % 3 != 0)
            {
                cout << -1 << nline;
                break;
            }
            if(N % 6 == 0)
            {
                N /= 6;
            }
            else
            {
                N *= 2;
            }
            ans++;
        }
        if(N == 1)
        {
            cout << ans << nline;
        }
    }
}
int main()
{	
	fastio();
	
	solve();
	
	return 0;
}
