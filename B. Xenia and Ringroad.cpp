// https://codeforces.com/contest/339/problem/B

#include <bits/stdc++.h>
using namespace std;


using ll    =   long long int;
using ull   =   unsigned long long;
using vi    =   vector < int >;
using vll   =   vector < ll >;
using vc    =   vector < char >;
using vs    =   vector < string >;
using vvi   =   vector < vector < int > >;
using vvs   =   vector < vector < string > >;






#define     ff              first
#define     ss              second
#define     pb              push_back
#define     mp              make_pair
#define     sz(s)           (s).length()
#define     digits(x)       trunc(log10(x))+1
#define     all(x)          (x).begin(), (x).end()
#define     sortv           sort(v.begin(), v.end())
#define     rev_sortv       sort(v.begin(), v.end(), greater<int>())
#define     maxelement(x)   max_element(v.begin(),v.end()) - v.begin()
#define     minelement(x)   min_element(v.begin(),v.end()) - v.begin()
#define     out(v)          for(auto value:v){cout<<value<<" ";}cout<<endl;
#define     inv             vi v;for(int i = 0; i < n; ++i){int x;cin >> x; v.pb(x);};
#define     pout(p)         for(auto value:p){cout<<value.ff<<" "<<value.ss<<endl;}cout<<endl;
// string to int stoi(x)
// int/double to string to_string(x)


int dx[8] = {1, -1, 0,  0, 1,  1, -1, -1};
int dy[8] = {0,  0, 1, -1, 1, -1,  1, -1};
string alpha = " abcdefghijklmnopqrstuvwxyz";




int main()
{
#ifndef ONLINE_JUDGE
    freopen("D:input.txt", "r", stdin);
    freopen("D:output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n , m;
    cin >> n >> m;
    vi v;
    v.pb(1);
    for (int i = 0; i < m; ++i)
    {
        int x;
        cin >> x;
        v.pb(x);
    }
    ll count = 0;
    int curr = 1;
    for (int i = 0; i < v.size(); ++i)
    {
        // cout << v[i] << ' ';
        if(v[i] == curr)
            continue;
        else if(v[i] != curr)
        {
            if(v[i] > curr)
            {
                count += abs(curr - v[i]);
                curr = v[i];
            }
            else if(v[i] < curr)
            {
                count += abs(n - curr) + v[i];
                curr = v[i];
            }
        }
    }
    cout << count << endl;


    
    return 0;
}
