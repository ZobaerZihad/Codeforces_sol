#include <bits/stdc++.h>
using namespace std;
int t, n, p;
long long a[200010], x, y, z, sum;
long long f(long long x)
{
  if (x > 0)
    return x;
  return 0;
}
int main()
{
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    scanf("%lld", &a[i]);
    sum += a[i];
  }
  sort(a, a + n);
  for (cin >> z; z > 0; z--)
  {
    scanf("%lld%lld", &x, &y);
    t = lower_bound(a + 1, a + n, x) - a;
    cout << t << " x" << endl;
    cout << min(f(x - a[min(n - 1, t)]) + f(y + a[min(n - 1, t)] - sum), f(x - a[t - 1]) + f(y + a[t - 1] - sum)) << endl;
  }
}