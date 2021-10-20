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
    int n, k;
    cin >> n >> k;
    vi v;
    int target , count=n;
    for (int i = 1; i <= n ; i++)
    {
        int x;
        cin >> x;
        v.pb(x);
        if(i == k)
            target = x;
    }

    for (int i = 0; i < v.size(); i++)
    {
        if(v[i]<target || v[i] == 0)
            count--;
    }
    
    cout << count;
}
int main()
{

    input_output();

    /* int t;
    cin >> t;
    while (t--)
    {
        lets_code();
    } */
    

    lets_code();

    return 0;
}