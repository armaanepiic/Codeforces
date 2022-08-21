//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.


// https://codeforces.com/contest/688/problem/A


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

    int n, d;
    cin >> n >> d;

    vi v;
    int count = 0;
    bool f;
    for (int i = 0; i < d; ++i)
    {
        string s;
        cin >> s;
        f = 0;

        for (int j = 0; j < n; ++j)
        {
            if (s[j] == '0') {
                count++;
                f = 1;
                break;
            }
        }
        if (f == 0) {
            v.pb(count);
            count = 0;
        }
        //cout << count << endl;
    }
    v.pb(count);
    //out(v);

    cout << *max_element(all(v));


    return 0;
}
