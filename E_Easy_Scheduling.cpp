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
#define speed                         \
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
    ll n, hg = 0, id = 0;
    cin >> n;
    vector<ll> a(n), b(n), c(n), d(n), e(n);
    f(i, 0, n)
            cin >>
        a[i];
    f(i, 0, n)
    {
        cin >> b[i];
        e[i] = b[i];
    }
    reverse(e.begin(), e.end());
    d[0] = b[0];
    f(i, 1, n)
    {
        d[i] = d[i - 1] + b[i];
    }
    for (ll i = 0, j = n - 1; i < n; i++, j--)
    {
        if (i == 0)
        {
            c[i] = b[i] * a[i];
        }
        else
        {
            ll pos = lower_bound(e.begin() + j, e.end(), b[i]) - e.begin();
            if (pos == n)
            {
                c[i] = b[i] * a[i] - d[i - 1];
            }
            else
            {
                c[i] = c[id] + (a[i] - a[id] - 1) * b[i];
            }
        }
    }
    ll q;
    cin >> q;
    while (q--)
    {
        ll c;
        cin >> c;
    }
}

int main()
{
    speed;
    ll t = 1;
    // cin >> t;

    f(y, 1, t + 1)
    {
        solve();
    }

    return 0;
}
