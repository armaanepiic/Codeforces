// https://codeforces.com/contest/78/problem/B

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


void printVec(vector<int>v)
{
    cout << "size::" << v.size() << endl;
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }

    cout << endl;
}



int main()
{
#ifndef ONLINE_JUDGE
    freopen("F:/io/input.txt", "r", stdin);
    freopen("F:/io/output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;cin>>n;

    string s = "ROYGBIV";

    bool f = 0;
    int count = 0;
    if(n%7 >= 1 && n%7 <= 3)
        f = 1;
    for (int i = 0 , k = 0, j = 0; i < n; ++i)
    {
        if(f == 1 && i == n-(n%7))
        {
            if(n%7 == 1)
                cout << "G";
            else if(n%7 == 2)
                cout << "YG";
            else
                cout << "OYG";
            break;
        }
        cout << s[k];
        k++;
        if(k == 7)
            k = 0;

    }
   
    return 0;
}
