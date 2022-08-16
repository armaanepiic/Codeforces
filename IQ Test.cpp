//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.

// link : https://codeforces.com/contest/287/problem/A



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

    char a[4][4];
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            cin >> a[i][j];
        }
    }
    bool flag = 1;
    int w = 0 , b = 0;
    int i = 0 , j = 0;
    int temp = 6;

    for (int i = 0; i < 3; ++i)
    {
        w = 0 ; b = 0;
        for (int j = 0; j < 3; ++j)
        {
            if(a[i][j]=='#')
                b++;
            else
                w++;
            if(a[i][j+1]=='#')
                b++;
            else
                w++;
            if(a[i+1][j]=='#')
                b++;
            else
                w++;
            if(a[i+1][j+1]=='#')
                b++;
            else
                w++;
            if((b==3&&w==1)||(w==3&&b==1)||w==4||b==4)
            {
                cout << "YES";
                return 0;
            }
            else
            {
                w = 0;b=0;
            }
        }
    }
    if(flag)
        cout << "NO";

}
