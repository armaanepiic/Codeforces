//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.
// https://codeforces.com/contest/680/problem/B


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

    //     bool flag = true;


    // }

    int n , p;
    cin >> n >> p;
    inv;
    int count = 0;
    p--;
    int temp = max((p - 0) , (n - 1 - p));
    //cout << temp << endl<<p<< endl;

    if (p <= n / 2)
    {
        for (int i = 1; i <= temp; ++i)
        {
            if (p - i >= 0)
            {
                if (v[p - i] + v[p + i] == 2)
                    count += 2;
            }
            else if (p + i < n)
            {
                if (v[p + i] == 1)
                    count++;
            }
        }
        if (v[p] == 1)
            count++;
    }
    else
    {
        for (int i = 1; i <= temp; ++i)
        {
            if (p + i < n)
            {
                if (v[p + i] + v[p - i] == 2)
                    count += 2;
            }
            else if (p - i >= 0)
            {
                if (v[p - i] == 1)
                    count++;
            }
        }
        if (v[p] == 1)
            count++;
    }



    cout << count;
    return 0;
}
