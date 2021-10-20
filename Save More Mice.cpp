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
    vi v(n + 1, 0);
    for (int i = 0; i < k ; i++)
    {
        int x;
        cin >> x;
        v[x]++;
    }
    int temp = n - 1 , c = 0;
    for (int i = temp; i > 0; i--)
    {
        if(v[i] > 0)
        {
            v[i + 1]++;
            v[i]--;
            c++;
            if(c == 10)
                break;
            v[c] = 0;
            i = n;
        }
    }
    cout << v[n] << endl;
}
int main()
{

    input_output();

    int t;
    cin >> t;
    while (t--)
    {
        lets_code();
    }
    

    //lets_code();

    return 0;
}
