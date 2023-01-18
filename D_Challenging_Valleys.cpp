#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
typedef pair<int, int> pi;
typedef string str;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define rep(i, a, b) for (int i = a; i <= b; i++)
#define ll long long
#define nn cout << "\n";
#define test     \
    int test;    \
    cin >> test; \
    while (test--)
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    int n;
    cin >> n;

    int temp = 1;
    for (int i = 7; i <= n; i += 2)
    {
        temp++;
    }

    if (n == 3)
    {
        cout << "NO" << endl;
    }
    else if ((n & 1) == 0)
    {
        cout << "YES\n";

        for (int i = 1; i <= n; i++)
        {
            if ((i & 1) == 1)
            {
                cout << 1 << " ";
            }
            else
            {
                cout << -1 << " ";
            }
        }

        nn
    }
    else
    {
        cout << "YES\n";
        for (int i = 1; i <= n; i++)
        {
            if ((i & 1) == 1)
            {

                cout << (temp * -1) << " ";
            }
            else
            {
                cout << temp + 1 << " ";
            }
        }
        nn
    }
}

int main()
{
    fastio

        test
        solve();

    return 0;
}