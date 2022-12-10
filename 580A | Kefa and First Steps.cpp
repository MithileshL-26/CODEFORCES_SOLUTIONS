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
    int n;
    cin >> n;
    
    int money[n] = {0};
    
    for(int i=0; i<n; i++)
    {
        cin >> money[i];
    }
    
    if(n == 1)
    {
        cout << 1 << nline;
        return;
    }

    int cnt = 1, max = 1;
    
    for(int i=0; i<n-1; i++)
    {
        if(money[i] <= money[i+1])
        {
            cnt++;
            if(max < cnt)
            {
                max = cnt;
            }
        }
        else
        {
            cnt = 1;
        }
    }
    cout << max << nline;
}
int main()
{	
	fastio();
	
	solve();
	
	return 0;
}
