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
using namespace std;
// #define int long long
typedef long long ll;
#define ok cout << "OK" << endl
#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

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

    ll n, m;
    cin >> n >> m;
    ll a[n + 5];
    // vector<ll> vv;

    memset(a, 0, sizeof(a));
    ll c[n + 1][n + 1];
    ll sum = 0, cc = 0;
    while (m--)
    {
        ll d, e;
        cin >> d >> e;
        c[d][e] = 1;
        c[e][d] = 1;
    }

    f(i, 1, n + 1)
    {
        ll z[n + 5];
        ll x = 0;
        ll y = 0;
        for (ll j = i; j < n + 1; j++)
        {
            z[x] = j;
            x++;
            cc++;
            f(k, 0, x)
            {
                f(l, 0, x)
                {

                    if (c[z[k]][z[l]] == 1)
                    {
                        y = 1;
                        break;
                    }
                    cc++;
                }
                if (y == 1)
                    break;
            }
            if (y == 1)
                break;
            else
            {
                sum += 1;
                cc++;
            }
        }
    }

    cout << sum << endl;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}