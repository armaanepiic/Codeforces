//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.

// link : https://codeforces.com/contest/47/problem/B



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

    vs v;
    set<char>a;
    for (int i = 0; i < 3; ++i)
    {
        string s;
        cin >> s;
        if(s[1] == '>')
            swap(s[0] , s[2]);
        v.pb(s);
        a.insert(s[0]);
    }
    if(a.size()==3)
        cout << "Impossible";
    
    //out(v);

    if(v[0][0] == v[1][0])
    {
        cout << v[0][0] << v[2][0] << v[2][2];
    }
    else if(v[0][0] == v[2][0])
    {
        cout << v[0][0] << v[1][0] << v[1][2];
    }
    else if(v[1][0] == v[2][0])
    {
        cout << v[1][0] << v[0][0] << v[0][2];

    }


    return 0;
}
