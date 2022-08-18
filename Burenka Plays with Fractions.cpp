//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.

// link : https://codeforces.com/contest/1720/problem/A



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

    int t;  cin >> t;
    while (t--) {

        bool flag = true;
        ll count = 0;

        ll a , b , c , d;
        cin >> a >> b >> c >> d;


        ll x = a * d;
        ll y = b * c;

        if (x == y)
            cout << 0 << endl;
        else if (y != 0 && x % y == 0 || x != 0 && y % x == 0)
            cout << 1 << endl;
        else
            cout << 2 << endl;

    }



    return 0;
}
