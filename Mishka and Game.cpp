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
    int t;
    cin >> t;
    int m = 0, c = 0;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if(x > y)
            m++;
        else if(x < y)
            c++;
    }
    if(m > c)
        cout << "Mishka";
    else if(m < c)
        cout << "Chris";
    else if(m==c)
        cout << "Friendship is magic!^^";
}
int main()
{

    input_output();

    lets_code();

    return 0;
}