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
    int n, t;
    cin >> n >> t;
    if(n == 1 && t < 10)
        cout << t;
    else if(n == 1 && t == 10)
        cout << -1;
    else
    {
        cout << t;
        if(t == 10)
            n--;
        for (int i = 1; i < n; i++)
        {
            cout << 0;
        }
        
    }
    
}
int main()
{

    input_output();

    lets_code();

    return 0;
}