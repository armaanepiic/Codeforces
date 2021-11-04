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
    int a, b;
    cin >> a >> b;
    int rem = b % a;
    if (rem == 0)
        cout << b / a;
    else if (rem > 0)
        cout << (b / a) + 1;
}
int main()
{

    input_output();

    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     lets_code();
    // }
    lets_code();

    return 0;
}