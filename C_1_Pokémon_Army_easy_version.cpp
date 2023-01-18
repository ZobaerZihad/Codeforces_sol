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
//#define int long long
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
    ll n, k, a, b, z = 0;
    cin >> n >> k >> a >> b;
    string r = "GB";
    if (a < b)
    {
        swap(a, b);
        swap(r[0], r[1]);
    }
    if ((b + 1) * k < a)
    {
        cout << "NO" << endl;
        return;
    }
    string s[b + 1];
    while (a)
    {
        f(i, 0, b + 1)
        {
            if (!a)
                break;
            s[i].push_back(r[0]);
            a--;
        }
    }
    f(i, 0, b)
            cout
        << s[i] << r[1];
    cout << s[b];
    cout << endl;
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
