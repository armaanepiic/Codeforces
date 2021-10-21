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
    ll n;
    cin >> n;
    int rem , count=0;
    while (n!=0)
    {
        rem = n % 10;
        if(rem == 4 || rem == 7)
            count++;
        n /= 10;
    }
    if(count == 4 || count == 7)
        cout << "YES";
    else
        cout << "NO";
}
int main()
{

    input_output();

    lets_code();

    return 0;
}