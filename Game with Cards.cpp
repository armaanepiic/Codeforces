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
#define     sortv           sort(v.begin(), v.end())
#define     rev_sortv       sort(v.begin(), v.end(), greater<int>())
#define     inv             vi v;for(int i = 0; i < n; ++i){int x;cin >> x; v.pb(x);};
#define     out(v)          for(int i = 0; i < v.size(); ++i){cout << v[i] << " ";}cout << endl;
#define     sz(s)           (s).length()
#define     all(x)          (x).begin(), (x).end()
#define     digits(x)       trunc(log10(x))+1





int main()
{
#ifndef ONLINE_JUDGE
    freopen("F:/io/input.txt", "r", stdin);
    freopen("F:/io/output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin >> t;
    while (t--) {
        
        int n;cin >> n;
        vi a;
        for (int i = 0; i < n; ++i)
        {
            int x;cin >> x;
            a.pb(x);
        }
        sort(all(a));
        int m;cin >> m;
        vi b;
        for (int i = 0; i < m; ++i)
        {
            int x;cin >> x;
            b.pb(x);
        }
        sort(all(b));

        int x , y;
        x = a[n-1];
        y = b[m-1];

        if(x > y)
        {
            cout << "Alice" << endl << "Alice" << endl;
        }
        else if(y > x)
        {
            cout << "Bob" << endl << "Bob" << endl;
        }
        else if(x == y)
        {
            cout << "Alice" << endl << "Bob" << endl;
        }
    }



    return 0;
}
