#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define inf 1e18
#define mod 1e9+7
#define w(x) int x; cin >> x; while(x--)
#define sp(x, y) fixed << setprecision(y) << x;
#define maxn 1e5

int time1 = 86400;
int n, t;
vector<int> arr(maxn);
void solve() {
   int ans = 0;
   for (int i = 0; i < n; i++)  {
       if (t > 0) {
           ans++;
           t -= time1 - arr[i];
       }
   }
   cout << ans << endl;
}

int main() {
    cin >> n >> t;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    solve();
    return 0;
}

