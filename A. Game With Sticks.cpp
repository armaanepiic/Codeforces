//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.
// https://codeforces.com/contest/451/problem/A
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






#define     pb              push_back
#define     mp              make_pair
#define     ff              first
#define     ss              second
#define     sortv           sort(v.begin(), v.end())
#define     rev_sortv       sort(v.begin(), v.end(), greater<int>())
#define     inv             vi v;for(int i = 0; i < n; ++i){int x;cin >> x; v.pb(x);};
#define     out(v)          for(auto value:v){cout<<value<<" ";}cout<<endl;
#define     pout(p)         for(auto value:p){cout<<value.ff<<" "<<value.ss<<endl;}cout<<endl;
#define     sz(s)           (s).length()
#define     all(x)          (x).begin(), (x).end()
#define     digits(x)       trunc(log10(x))+1
#define     maxelement(x)   max_element(v.begin(),v.end()) - v.begin()
#define     minelement(x)   min_element(v.begin(),v.end()) - v.begin()
// string to int stoi(x)
// int/double to string to_string(x)


int dx[8] = {1, -1, 0,  0, 1,  1, -1, -1};
int dy[8] = {0,  0, 1, -1, 1, -1,  1, -1};
string alpha = " abcdefghijklmnopqrstuvwxyz";




int main()
{
#ifndef ONLINE_JUDGE
    freopen("F:input.txt", "r", stdin);
    freopen("F:output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int r , c;
    cin >> r >> c;

    if(min(r,c)%2==0)
        cout << "Malvika";
    else
        cout << "Akshat";

    return 0;
}
