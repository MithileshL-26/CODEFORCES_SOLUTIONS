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
    
    int arr[n];
    
    int i;
    for(i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    
    int cnt = 0;
    int max = *max_element(arr, arr+n);
    
    for(i=0; i<n; i++)
    {
        cnt += (abs(arr[i] - max));
    }
    cout << cnt << nline;
}
int main()
{	
	fastio();
	
	solve();
	
	return 0;
}
