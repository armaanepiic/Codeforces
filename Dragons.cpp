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


    int s,n;
    cin >> s >> n;
    vector<pair<int,int>>v;
    for (int i = 0; i < n; ++i)
    {
        int x,y;
        cin >> x >> y;
        v.pb(mp(x,y));
    }
    // for (int i = 0; i < n; ++i)
    // {
    //     cout << v[i].first << " " << v[i].second << endl;
    // }
    int dragon = n;
    sortv;

    for (int i = 0; i < n; ++i)
    {
        if(v[i].ff < s){
            dragon--;
            s += v[i].ss;
        }
        else
            break;
    }

    if(dragon == 0)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
