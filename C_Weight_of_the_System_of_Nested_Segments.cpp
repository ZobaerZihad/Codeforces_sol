#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define clr(a, b) memset(a, b, sizeof a)
#define rep(i, a, b) for (int i = (a); i <= (b); ++i)
#define per(i, a, b) for (int i = (a); i >= (b); --i)
typedef long long LL;
typedef double DB;
typedef long double LD;

const int MAXN = 1009;
const int MAX = 509;
const int P = 10;
using namespace std;

int n;
unsigned long long l[1000000];
int main()
{

    scanf("%d", &n);
    rep(i, 1, n) cin >> l[i];
    sort(l + 1, l + n + 1);
    bool flag = false;
    rep(i, 3, n) if (l[i] < l[i - 1] + l[i - 2])
    {
        cout << l[i - 2] << " " << l[i - 1] << " " << l[i] << endl;
        flag = true;
        break;
    }
    if (!flag)
        cout << "0 0 0" << endl;
    ;

    return 0;
}