//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.

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
    ll n, k;
    cin >> n >> k;
    ll odd_range;
    ll position;
    if(n%2 == 0)
        odd_range = n / 2;
    else if(n%2 == 1)
        odd_range = (n + 1) / 2;
    
    if(k <= odd_range)
    {
        position = (k * 2) - 1;
    }
    else
    {
        position = (k - odd_range) * 2;
    }
    cout << position;
}
int main()
{

    input_output();

    lets_code();

    return 0;
}