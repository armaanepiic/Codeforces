// https://codeforces.com/contest/746/problem/B

//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.
#include <bits/stdc++.h>
using namespace std;


using ll    =   long long int;
using ull   =   unsigned long long;
using vi    =   vector<int>;
using vll   =   vector<ll>;
using vc    =   vector<char>;
using vs    =   vector<string>;
using vvi   =   vector<vector<int>>;




#define     pb              push_back
#define     mp              make_pair
#define     ff              first
#define     ss              second
#define     sortv           sort(v.begin(), v.end())
#define     rev_sortv       sort(v.begin(), v.end(), greater<int>())
#define     inv             vi v;for(int i = 0; i < n; ++i){int x;cin >> x; v.pb(x);};
#define     out(v)          for(int i = 0; i < v.size(); ++i){cout << v[i] << " ";}cout << endl;
#define     sz(s)           (s).length()
#define     all(x)          (x).begin(), (x).end()
#define     digits(x)       trunc(log10(x))+1
#define     even(x)         (x)%2
#define     inn             int n;cin>>n;






int main()
{
#ifndef ONLINE_JUDGE
    freopen("F:/io/input.txt", "r", stdin);
    freopen("F:/io/output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    string s;
    cin >> s;
    if (sz(s) % 2 == 1)
    {
        for (int i = n - 1; i >= 0; --i)
        {
            if (i % 2 == 1)
                cout << s[i];
        }
        for (int i = 0; i < n; ++i)
        {
            if (i % 2 == 0)
                cout << s[i];
        }
    }
    else
    {
        string x , y;
        for (int i = 0; i < sz(s); ++i)
        {
            if(i%2==0)
                x.pb(s[i]);
            else
                y.pb(s[i]);
        }
        for (int i = 0; i < sz(x); ++i)
        {
            cout << x[sz(x)-i-1];
        }
        for (int i = 0; i < sz(y); ++i)
        {
            cout << y[i];
        }


    }



    return 0;
}
