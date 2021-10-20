// Bismillahir rahmanir rahim
// Arman Hossain C193033
// Programming is nothing but an addiction.

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define sortv sort(v.begin(), v.end())
#define rev_sortv sort(v.begin(), v.end(), greater<int>())

using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vll = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;

void input_output()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
void lets_code()
{
    ll a, b, c, maximum;
    cin >> a >> b >> c;
    maximum = max(a, max(b, c));
    ll low = 0, high = 0, m = 0;
    for (int i = 0; i < 3; ++i)
    {
        int j;
        if (i == 0)
            j = a;
        else if (i == 1)
            j = b;
        else if (i == 2)
            j = c;
        if (j == maximum)
            m++;
        else if (j < maximum)
            low++;
        else if (j > maximum)
            high++;
    }
    if (a == b && b == c)
        cout << 1 << " " << 1 << " " << 1 << endl;
    else if (m == 2)
    {
        if (a == maximum)
            a = 1;
        else
            a = maximum - a + 1;
        if (b == maximum)
            b = 1;
        else
            b = maximum - b + 1;
        if (c == maximum)
            c = 1;
        else
            c = maximum - c + 1;

        cout << a << " " << b << " " << c << endl;
    }
    else
    {

        if (a == maximum)
            a = 0;
        else
            a = maximum - a + 1;
        if (b == maximum)
            b = 0;
        else
            b = maximum - b + 1;
        if (c == maximum)
            c = 0;
        else
            c = maximum - c + 1;

        cout << a << " " << b << " " << c << endl;
    }
}
int main()
{

    input_output();

    lets_code();

    return 0;
}