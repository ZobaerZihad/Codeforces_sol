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
    ll a[n][m], cn = 0;
    vector<pair<ll, ll>> v;
    f(i, 0, n)
    {
        ll z = 0;
        f(j, 0, m)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
            {
                cn++;
                z++;
            }
        }

        v.push_back(make_pair(z, i));
        z = 0;
    }
    if (cn % n != 0)
    {
        cout << -1 << endl;
    }
    vector<ll> vv;
    cn /= n;
    D(cn);
    sort(v.rbegin(), v.rend());
    // ll k=v.size()-1;
    for (ll j = 0, k = v.size() - 1; j <= k;)
    {
        if (v[j].ff == cn)
            j++;
        if (v[k].ff == cn)
            k--;
        if (j > k)
            break;
        f(i, 0, m)
        {
            if (a[v[k].ss][i] == 0 && a[v[j].ss][i] == 1)
            {
                vv.push_back(v[j].ss + 1);
                vv.push_back(v[k].ss + 1);
                vv.push_back(i + 1);
                v[j].ff = v[j].ff - 1;
                v[k].ff = v[k].ff + 1;
                a[v[k].ss][i] = 1;
                a[v[j].ss][i] = 0;
            }
        }
    }
    cout << vv.size() / 3 << endl;
    ll k = vv.size();
    f(i, 0, k)
    {
        cout << vv[i] << " ";
        if (k % 3 == 2)
            cout << endl;
    }
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
