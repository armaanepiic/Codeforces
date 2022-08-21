//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.
// https://codeforces.com/contest/158/problem/B



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






int main()
{
#ifndef ONLINE_JUDGE
    freopen("F:/io/input.txt", "r", stdin);
    freopen("F:/io/output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    int a[4] = {0};
    ll count = 0;
    for (int i = 0; i < n; ++i)
    {
        int x; cin >> x;
        if (x == 4)
            count++;
        else
            a[x]++;
    }

    // for(int i=1 ; i<4 ; i++)cout<<a[i]<<" ";
        // cout << endl;
    int x = (a[2]) / 2;
    count += x;
    a[2] = (a[2]) % 2;

    // int y = (a[1] / 4);
    // count += y;
    // a[1] = (a[1] % 4);

    if (a[3] > 0 && a[1] > 0)
    {
        int temp = min(a[1], a[3]);
        count += temp;
        a[1] -= temp;
        a[3] -= temp;
    }
    // for (int i = 1 ; i < 4 ; i++)cout << a[i] << " ";

    if (a[1] > 0 || a[2] > 0)
    {
        int z = (a[2] * 2) + a[1];
        count += z / 4;
        if (z % 4 > 0)
            count++;
        //cout << count << endl;
        a[1]=0;
        a[2]=0;
    }
    if(a[3] > 0 || a[2] > 0)
        count += (a[2]+a[3]);


    // cout << "\ncount = ";
    cout << count;



    return 0;
}
