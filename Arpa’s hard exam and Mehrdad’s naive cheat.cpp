//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define endl cout << endl
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
    ll temp = n * log2(1378);
    if(n % 2 == 0)
        cout << temp % 10;
    else if(n % 2 == 1)
        cout << (temp % 10) + 1;
}
int main()
{

    input_output();

    lets_code();

    return 0;
}