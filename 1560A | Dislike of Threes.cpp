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
        int k;
        cin >> k;
        
        int index = 0;
        
        int i = 1;
        while(index != k)
        {
            if(i % 3 != 0 && i % 10 != 3)
            {
                index++;
            }
            i++;
        }
        cout << i-1 << nline;
    }
}
int main()
{	
	fastio();
	
	solve();
	
	return 0;
}
