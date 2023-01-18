#include <bits/stdc++.h>
#define f(i, a, n) for (long long i = a; i < n; i++)
#define fr(i, n) for (long long i = 1; i <= n; i++)
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define ll long long
using namespace std;

void solve()
{
 ll n, k = 0, c = 0;
 cin >> n;
 string st;
 string tss;
 cin >> st >> tss;
 ll cfff = 0;
 f(i, 0, 100)
 {
  cfff++;
 }
 f(i, 0, n)
 {
  if (st[i] != tss[i])
   k++;
 }
 ll m = 0;
 f(i, 0, n)
 {
  if (st[i] == tss[i])
   c++;
  if (st[i] == '0')
   m++;
  if (tss[i] == '0')
   m++;
 }

 if (k != n && c != n)
 {
  cout << "NO" << endl;
  return;
 }
 if (m == 2 * n)
 {
  cout << "YES" << endl;
  cout << 0 << endl;
  return;
 }

 vector<ll> v2, v3, v4;

 vector<ll> vv;
 cout << "YES" << endl;
 ll cn = 0;
 if (c == n)
 {

  f(i, 0, n)
  {
   if (st[i] == '0')
   {
    vv.push_back(i + 1);
    cn++;
   }
  }
  f(i, 0, 100)
      cfff++;

  f(i, 0, 100) cfff++;
  if (cn % 2 == 1)
  {
   cout << cn + 1 << endl;
   for (auto i : vv)
   {
    cout << i << " " << i << endl;
   }

   cout << 1 << " " << n << endl;
  }
  else
  {
   cout << cn + 2 << endl;
   for (auto i : vv)
   {
    cout << i << " " << i << endl;
   }
   cout << n << " " << n << endl;
   cout << 1 << " " << n - 1 << endl;
  }
 }

 else if (k == n)
 {
  f(i, 0, n)
  {
   if (st[i] == '0')
   {
    vv.push_back(i + 1);
    cn++;
   }
  }
  if (cn % 2 == 0)
  {
   cout << cn + 1 << endl;
   for (auto i : vv)
   {
    cout << i << " " << i << endl;
   }

   cout << 1 << " " << n << endl;
  }
  else
  {
   cout << cn + 2 << endl;
   for (auto i : vv)
   {
    cout << i << " " << i << endl;
   }
   cout << n << " " << n << endl;
   cout << 1 << " " << n - 1 << endl;
  }
 }
}

int main()
{

 ll t;
 cin >> t;
 f(y, 1, t + 1)
 {
  solve();
 }

 return 0;
}
