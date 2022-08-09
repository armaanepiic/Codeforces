//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.

//  https://codeforces.com/contest/230/problem/B

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

bool prime[10000001];

void sieve()
{
    prime[0] = prime[1] = true;

    ll n = 10000000;

    int countPrimes = 0;

    for (int i = 2 ; i*i <= n; ++i)
    {
        if(prime[i] == false)
        {
            for (int j = i*i ; j <= n ; j+=i)
            {
                prime[j] = true;
            }
        }
    }

}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("F:/io/input.txt", "r", stdin);
    freopen("F:/io/output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    sieve();
    while (t--) {

        ll n;cin >> n;

        if(n == 1)
            n++;

        double x = sqrt(n);
        if(ceil(x) != floor(x))
            cout << "NO" << endl;
        else{
            ll y = x;
            if(prime[y])
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }


    }
    
    return 0;
}
