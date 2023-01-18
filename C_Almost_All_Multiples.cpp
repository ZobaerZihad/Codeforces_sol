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
 int n, x;
 cin >> n >> x;
 vector<int> vec, c;
 vec.push_back(-12);

 if (n % x != 0)
 {
  cout << -1 << endl;
  return;
 }
 vec.push_back(x);
 ll y = n >> 16;
 if (y == x)
 {
  cout << -1 << endl;
  return;
 }
 f(i, 0, n)
 {
  c.push_back(i + 1);
 }
 c[n - 1] = 1;
 c[0] = x;
 f(i, 2, n)
     vec.push_back(i);
 vec.push_back(1);
 for (int i = 2; i * i <= n / x; i++)
 {
  while ((n / x) % i == 0)
  {
   vec[x] = x * i;
   x *= i;
  }
 }
 if (x < n)
  vec[x] = n;
 f(i, 1, n + 1)
         cout
     << vec[i] << " ";
 cout << endl;
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
