//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define sortv sort(v.begin(), v.end())
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
int main()
{
    input_output();

    int n;
    cin >> n;
    vi v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }
    sortv;
    int min = v.front(), max = v.back();
    int min_freq = 0, max_freq = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i] == min)
            min_freq++;
        else if(v[i] == max)
            max_freq++;
    }
    cout << n - min_freq - max_freq;

    return 0;
}