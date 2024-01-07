// Arman Hossain C193033
// Programming is fun with emotion
// https://codeforces.com/contest/492/problem/B
#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using ull = unsigned long long;
using vi = vector<int>;
using vll = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
using vvi = vector<vector<int>>;
using vpi = vector<pair<int, int>>;
using vvs = vector<vector<string>>;

#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define sz(s) (s).length()
#define digits(x) trunc(log10(x)) + 1
#define all(x) (x).begin(), (x).end()
#define sumvec(x) accumulate((x).begin(), (x).end(), 0)
#define uniq_element(x) unique((x).begin(), (x).end()) - (x).begin()
#define rev_sort(x) sort((x).begin(), (x).end(), greater<int>())
#define maxelement(x) max_element((x).begin(), (x).end()) - (x).begin()
#define minelement(x) min_element((x).begin(), (x).end()) - (x).begin()

int dx[8] = {1, -1, 0, 0, 1, 1, -1, -1};
int dy[8] = {0, 0, 1, -1, 1, -1, 1, -1};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, l;
    cin >> n >> l;
    vi v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }
    double mx = 0, left, right, dis = 0, d, x;
    sort(all(v));
    for (int i = 1; i < v.size(); i++)
    {
        dis = (v[i] - v[i - 1]);
        if (dis > mx)
        {
            mx = max(mx, dis);
            left = v[i - 1];
            right = v[i];
        }
    }

    d = mx / 2.0;
    x = l - v[v.size() - 1];
    x = max(x, (double)v[0]);
    d = max(x, d);
    cout << fixed << setprecision(10) << d << endl;

    return 0;
}
