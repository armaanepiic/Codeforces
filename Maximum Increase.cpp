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

    ll n;
    cin >> n;
    bool flag = 1;
    vector<ll>v;
    for (int i = 0; i < n; ++i)
    {
        ll x;cin>>x;
        v.pb(x);
    }
    ll count = 0 , same = 0;
    vi length;
    for (int i = 0; i < v.size() - 1; ++i)
    {
        if(v[i] < v[i+1])
        {
            count++;
            if(i == n-2)
                length.pb(count+1);
        }
        else if(v[i] >= v[i+1] && count > 0)
        {
            length.pb(count+1);
            count = 0;
        }
        else if(v[i] == v[i+1])
            same++;
    }

    //out(length);
    if(length.size() > 0)
        cout << *max_element(all(length));
    else
        cout << 1;

    
    return 0;
}
