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
}

int main()
{
    speed;
    ll t;
    cin >> t;

    f(y, 1, t + 1)
    {
        // solve();
        int n;
        cin >> n;
        vector<pair<int, int>> mx;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            int m = INT_MIN;
            for (int i = 1; i <= k; i++)
            {
                int arm;
                cin >> arm;
                m = max(m, arm - i + 2);
            }
            mx.emplace_back(m, k);
        }
        sort(mx.begin(), mx.end());
        int finalpow = 0, pow = 0;
        for (auto it : mx)
        {
            if (pow + finalpow < it.first)
            {
                finalpow = it.first - pow;
            }
            pow += it.second;
            // D(finalpow);
        }
        cout << finalpow;
    }

    return 0;
}
