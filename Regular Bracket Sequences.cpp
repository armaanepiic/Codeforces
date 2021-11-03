// Bismillahir rahmanir rahim
// Arman Hossain C193033
// Programming is nothing but an addiction.
#include <bits/stdc++.h>
using namespace std;
#define pb push_back

#define sortv sort(v.begin(), v.end())
#define rev_sortv sort(v.begin(), v.end(), greater<int>())

using ll = long long int;
using ull = unsigned long long;
using vi = vector<int>;
using vll = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;

void lets_code()
{
    int n;
    cin >> n;
    int temp = n * 2;
    string s = "()";
    for (int i = 0, m = n - 1; i < n; i++, m--)
    {
        cout << "(";
        for (int j = 1; j <= i; j++)
        {
            cout << s;
        }
        cout << ")";
        for (int j = 0; j < m; j++)
        {
            cout << s;
        }
        cout << endl;
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        lets_code();
    }

    // lets_code();

    return 0;
}