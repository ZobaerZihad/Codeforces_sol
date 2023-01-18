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

// #define int long long
typedef long long ll;
#define ok cout << "OK" << endl
#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
// typedef vector<ll> vll;
// int a[10000/32+2];
int pp(ll n)
{
    f(i, 2, n)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
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

ll binexp(ll a, ll b, ll m)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
        {
            res = (res * 1LL * a) % m;
        }
        a = (a * 1LL * a) % m;
        b >>= 1;
    }
    return res;
}

void solve()
{
    ll n, cn = 0;
    cin >> n;
    vector<ll> v;
    f(i, 0, n)
    {
        ll a;
        cin >> a;
        v.push_back(a);
    }

    unordered_map<ll, ll> x;
    map<ll, ll> m, mm;
    f(i, 0, n)
    {
        x[v[i]]++;
        m[v[i]]++;
    }

    ll cnn = 0;
    f(i, 0, n)
    {
        f(j, i + 1, n)
        {
            if (v[i] % v[j] == 0)
                cnn++;
        }
    }
    f(i, 0, n)
    {
        mm[m[v[i]]] = m[v[i]];
    }
    for (auto i : x)
    {
        if (i.ss > 1)
        {
            pn;
            return;
        }
    }
    if (cnn % 2 == 1)
    {
        f(i, 0, n)
        {
            if (pp(v[i]) == 0)
            {
                cnn++;
            }
        }
    }

    f(i, 0, n)
    {
        if (m[v[i]] > 1)
            cnn--;
    }

    f(i, 0, n)
    {
        if (pp(v[i]) == 1)
        {
            cn++;
        }
    }
    bool f = false;
    if (cnn % 2 == 0 && cn % 2 == 0)
        f = true;
    if (cn % 2 == 0)
        py;
    else
        pn;
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