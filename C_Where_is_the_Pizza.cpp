#include <bits/stdc++.h>
#define f(i, a, n) for (long long i = a; i < n; i++)
#define fr(i, n) for (long long i = 1; i <= n; i++)
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define D(x) cout << #x " = " << (x) << endl
#define nl "\n"
#define ff first
#define ss second
#define pb push_back
#include <string>
#define st(v) sort(v.begin(), v.end())
#define INF ll_MAX

//#define int long long
typedef long long ll;
#define ok cout << "OK" << endl
#define speed                      \
 ios_base::sync_with_stdio(false); \
 cin.tie(NULL);                    \
 cout.tie(NULL);
using namespace std;
// typedef vector<ll> vll;
// int a[10000/32+2];
/*
bool Check(int N,int pos){return (bool)(N & (1<<pos));}
int Set(int N,int pos){	return N=N | (1<<pos);}

void sieve(int n)
{
    for(int i=3;i*i<=n;i+=2)
    {
        if(Check(a[i/32],i%32)==0)
        {
            for(int j=i*i;j<=n;j+=2*i)
            {
                a[j/32]=Set(a[j/32],j%32);
            }
        }
    }
}
*/
ll mod = 1e9 + 7;
void solve()
{
 ll n;
 cin >> n;
 ll a[n], b[n], d[n + 1], c[n + 1];
 f(i, 1, n + 1)
 {
  d[i] = 0;
 }
 f(i, 0, n)
 {
  cin >> a[i];
  c[a[i]] = i;
 }
 f(i, 0, n) cin >> b[i];
 f(i, 0, n)
 {
  ll x;
  cin >> x;
  d[x] = 1;
 }
 ll ans = 1LL;
 f(i, 0, n)
 {
  if (d[a[i]] == 1 || d[b[i]] == 1)
   continue;
  if (a[i] == b[i])
   continue;
  ll cur = b[i];
  vector<ll> v;
  bool f = 0;
  v.push_back(a[i]);
  while (cur != a[i])
  {
   if (d[cur] == 1)
    f = 1;
   cur = b[c[cur]];
   if (d[cur] == 1)
    f = 1;
   v.push_back(cur);
  }
  if (f == 0)
  {
   ans = (ans * 2LL) % mod;
  }
  for (auto i : v)
  {
   d[i] = 1;
  }
 }
 cout << ans << endl;
}

int main()
{
 speed;
 ll t;
 cin >> t;
 f(y, 1, t + 1)
 {
  solve();
 }

 return 0;
}
