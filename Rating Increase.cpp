// Arman Hossain C193033
// Programming is fun with emotion
// https://codeforces.com/contest/1913/problem/A
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

const int N = 10000001;
bool sieve[N];

void generate_sieve()
{
    sieve[0] = sieve[1] = 1;
    for (int i = 2; i * i < N; i++)
    {
        if (!sieve[i])
        {
            for (int j = i * i; j < N; j += i)
                sieve[j] = 1;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll count = 0;
        bool flag = true, f = 1;
        string s;
        cin >> s;
        string a = "", b = s;
        int x, y;
        for (int i = 0; i < s.length() - 1; i++)
        {
            a.insert(a.begin(), s[s.length() - i - 1]);
            b.pop_back();
            if(a[0] == '0')
                continue;
            x = stoi(a);
            y = stoi(b);
            if (x - y > 0)
            {
                if (digits(x) + digits(y) != s.length())
                    break;
                f = 0;
                cout << y << ' ' << x << endl;
                break;
            }
        }
        if (f)
            cout << -1 << endl;
    }

    return 0;
}
