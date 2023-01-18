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
////////////_____COMBINATORICS________/////////
vector<ll> F, invF;
vector<ll> MInv;
const int N = (int)1e6 + 5;
const int M = (int)1e9 + 5;
const int mod = (int)998244353;

void Modular_Inverse(int p)
{
 MInv.resize(N + 1);

 MInv[0] = MInv[1] = 1;
 for (ll i = 2; i <= N; i++)
 {
  MInv[i] = (MInv[p % i] * (p - (p / i))) % p;
 }
}

void PreCalFacts()
{
 F.resize(N + 1);
 invF.resize(N + 1);

 F[0] = F[1] = 1;
 for (ll i = 2; i <= N; i++)
 {
  F[i] = (i * F[i - 1]) % mod;
 }

 Modular_Inverse(mod);

 invF[0] = invF[1] = 1;
 for (ll i = 2; i <= N; i++)
 {
  invF[i] = (MInv[i] * invF[i - 1]) % mod;
 }
}

ll nCr(ll n, ll r)
{
 if (r > n || n < 0 || r < 0)
  return 0;
 return F[n] * invF[r] % mod * invF[n - r] % mod;
}
////////////_____COMBINATORICS________/////////

ll cal(ll n, ll alice)
{
 if (n == 2)
 {
  if (alice)
   return 1;

  return 0;
 }
 ll ns = 0;
 if (alice)
 {
  ns = nCr(n - 1, (n / 2) - 1);
  ns += cal(n - 2, alice ^= 1);
  ns %= mod;
 }
 else
 {
  ns = nCr(n - 2, (n / 2) - 2);
  ns += cal(n - 2, alice ^= 1);
  ns %= mod;
 }
 return ns;
}
void solve()
{

 ll n;
 cin >> n;

 ll alice = cal(n, 1);
 ll bob = cal(n, 0);
 ll dr = nCr(n, n / 2) - alice;
 if (dr < 0)
  dr += mod;
 dr -= bob;
 if (dr < 0)
  dr += mod;
 cout << alice << " " << bob << " " << dr << endl;
}

signed main()
{
 speed;
 PreCalFacts();
 ll t;
 cin >> t;
 f(y, 1, t + 1)
 {
  solve();
 }

 return 0;
}
