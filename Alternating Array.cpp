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




int main()
{
#ifndef ONLINE_JUDGE
    freopen("F:/io/input.txt", "r", stdin);
    freopen("F:/io/output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    inv;
    int count = 0;
    int t = 2;
    int a , b;
    while (t--) {
        count = 0;

        if (v[0] > 0)
        {
            for (int i = 1; i < n; ++i)
            {
                if (i % 2 == 0 && v[i] < 0)
                    count++;
                else if (i % 2 == 1 && v[i] > 0)
                    count++;
            }
        }
        else if (v[0] < 0)
        {
            for (int i = 1; i < n; ++i)
            {
                if (i % 2 == 0 && v[i] > 0)
                    count++;
                else if (i % 2 == 1 && v[i] < 0)
                    count++;
            }
        }

        if (t == 1) {
            a = count;
            v[0] *= -1;
        }
        else{
            count++;
            b = count;
        }

    }

    cout << min(a , b);
    return 0;
}
