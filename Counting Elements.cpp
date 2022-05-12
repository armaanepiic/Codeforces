
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
    sortv;
    int count = 0,f;
    //out(v);
    for (int i = 0; i < n-1 ; ++i)
    {
        f = 0;
        for (int j = i+1 ; j < n; ++j)
        {
            if(v[j] == v[i]+1 && f == 0){
                count++;
                f++;
            }
            else if(v[j] == v[i]+2){
                f = 0;
                break;
            }
            // else if(v[j] == v[i])
            //     continue;
        }
    }
    cout << count;

    return 0;
}
