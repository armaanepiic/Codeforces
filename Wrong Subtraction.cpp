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
    int n, t, temp;
    cin >> n >> t;
    while (1)
    {
        temp = n % 10;
        if (temp == 0)
        {
            n /= 10;
            t--;
            if (t == 0)
                break;
        }
        else if (temp > 0)
        {
            if (temp <= t)
            {
                n -= temp;
                t -= temp;
                if (t == 0)
                    break;
            }
            else if (temp > t)
            {
                n -= t;
                break;
            }
        }
    }
    cout << n;
}
int main()
{

    input_output();

    lets_code();

    return 0;
}