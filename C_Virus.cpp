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

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll b[k];
    f(i, 0, k)
    {
        cin >> b[i];
    }
    sort(b, b + k);
    vector<ll> v;
    f(i, 0, k)
    {
        if (i == k - 1)
        {
            v.push_back(n + b[0] - b[i] - 1);
        }
        else
            v.push_back(b[i + 1] - b[i] - 1);
    }
    sort(v.begin(), v.end());

    ll s = 0;
    ll sx = v.size(), j = 4;
    for (ll i = sx - 1; i >= 0; i--)
    {
        if (v[i] == 0)
            break;
        if (i == sx - 1)
            s += max(v[i] - 1, 1LL);
        else
        {
            ll x = v[i] - j;
            if (x > 0)
                s++;
            x -= 2;
            if (x > 0)
                s += x;

            j += 4;
        }
    }
    cout << n - s << endl;
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
