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
ll bin(ll k)
{
 ll left = 0, right = 2000000123;
 while (right > left)
 {
  ll mid = (left + right) / 2;

  if (mid * mid > k)
   right = mid;
  else
   left = mid + 1;
 }
 return left - 1;
}
void solve()
{
 ll n;
 cin >> n;
 string s;
 cin >> s;
 ll e = 0, o = 0, k = 0, cn = 0, cnn = 0;
 f(i, 0, n)
 {
  if (s[i] == '0')
   e++;
  else
   o++;
 }
 f(i, 0, n)
 {
  if (s[i] == '0')
   k++;
  else
  {
   cn = max(cn, k);
   k = 0;
  }
 }
 cn = max(cn, k);
 k = 0;
 f(i, 0, n)
 {
  if (s[i] == '1')
   k++;
  else
  {
   cnn = max(cnn, k);
   k = 0;
  }
 }
 cnn = max(cnn, k);

 cout << max(e * o, max(cn * cn, cnn * cnn)) << endl;
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