//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.
#include <bits/stdc++.h>
using namespace std;


using ll    =   long long int;
using ld    =   long double;
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
#define     even(x)         (x)%2




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
        
        bool flag = true;

        ll n;
        cin >> n;
        ll a , b , p , q , temp;

        if(n%2==1 || n == 2)
            cout << -1 << endl;
        else if(n%2==0 && n > 2)
        {
            if(n%6==0)
                p = n / 6;
            else
                p = (n/6) - 1;
            temp = n - (6*p);
            
            q = temp / 4;
            a = p+q;
           

            if(n%4==0)
                p = n / 4;
            else
                p = (n/4) - 1;
            temp = n - (4*p);
            
            q = temp / 6;
            b = p+q;

         

            cout << min(a,b) << " " << max(a,b) << endl; 
        }
        

    }



    return 0;
}
