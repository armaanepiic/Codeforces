//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
void input_output()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    input_output();

    ll n, x;
    cin >> n >> x;
    char ch;
    ll temp, dis = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ch >> temp;
        if(ch == '+')
            x += temp;
        else if(ch == '-')
        {
            if(temp > x)
                dis++;
            else
                x -= temp;
        }
    }
    cout << x << " "<< dis;

    return 0;
}