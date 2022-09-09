// https://codeforces.com/contest/1169/problem/A

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
#define     out(v)          for(int i=0;i<v.size();++i){cout<<v[i]<<" ";}cout<<endl;
#define     sz(s)           (s).length()
#define     all(x)          (x).begin(), (x).end()
#define     digits(x)       trunc(log10(x))+1
#define     strint(x)       stoi(x)










int main()
{
#ifndef ONLINE_JUDGE
    freopen("F:input.txt", "r", stdin);
    freopen("F:output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n , a, x , b , y;
    cin >> n >> a >> x >> b >> y;
    vi s1 , s2;
    if (x > a && x <= n)
    {
        for (int i = a; i <= x; ++i)
        {
            s1.pb(i);
        }
    }
    else if (x < a)
    {
        for (int i = a; i <= n; ++i)
        {
            s1.pb(i);
        }
        for (int i = 1; i <= x; ++i)
        {
            s1.pb(i);
        }
    }
    if (y < b && y >= 1)
    {
        for (int i = b; i >= y ; --i)
        {
            s2.pb(i);
        }
    }
    else if (y > b)
    {
        for (int i = b; i >= 1 ; --i)
        {
            s2.pb(i);
        }
        for (int i = n; i >= y; --i)
        {
            s2.pb(i);
        }
    }
    // out(s1);out(s2);
    bool f = false;
    for (int i = 0; i < min(s1.size() , s2.size()); ++i)
    {
        if(s1[i] == s2[i]){
            f = true;
            break;
        }
    }
    if(f)cout << "YES";
    else cout << "NO";


    return 0;
}
