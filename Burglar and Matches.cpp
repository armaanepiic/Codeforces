// https://codeforces.com/contest/16/problem/B

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




int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // int t;  cin >> t;
    // while (t--) {


    // }
    int n , m ;
    cin >> n >> m;
    vi a , b;
    for (int i = 0; i < m; ++i)
    {
        int x, y; cin >> x >> y;
        a.pb(x);
        b.pb(y);
    }
    for (int i = 0; i < m - 1; ++i)
    {
        for (int j = i + 1; j < m; ++j)
        {
            if(b[i] < b[j]) {
                swap(b[i], b[j]);
                swap(a[i], a[j]);
            }
        }




    }
    
    ll sum = 0;
    for (int i = 0; i < m; ++i)
    {
        if (n == 0)
            break;
        else if (a[i] <= n)
        {
            sum += a[i] * b[i];
            n = n - a[i];
        }
        else if (a[i] > n)
        {
            int temp;
            temp = a[i] - n;
            sum += n * b[i];
            n = 0;
        }
    }
    cout << sum;
    return 0;
}
