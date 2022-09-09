// https://codeforces.com/contest/787/problem/A


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

ll term(int x , int y , int n)
{
    ll a = x + (n-1) * y;
    cout << "a=" << a << endl;
    return a;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("F:input.txt", "r", stdin);
    freopen("F:output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a , b , c , d;
    cin >> a >> b >> c >> d;
    bool flag = false;

    vll x , y;
    for (int i = 0; i < 101; ++i)
    {
        ll temp = b + (i*a);
        x.pb(temp);
    }
    for (int i = 0; i < 101; ++i)
    {
        ll temp = d + (i*c);
        y.pb(temp);
    }
    for (int i = 0; i < x.size(); ++i)
    {
        ll temp = x[i];
        if(binary_search(y.begin() , y.end() , temp)){
            cout << temp;
            flag = true;
            break;
        }
    }
    if(flag == false)
        cout << -1;

    


    return 0;
}
