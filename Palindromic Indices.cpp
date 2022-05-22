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
        
        int n;
        cin >> n;

        ll count = 0;
        string s;
        cin >> s;
        int index;
        if(n%2==0)
            index = (n/2)-1;
        else
            index = n/2;
        char temp = s[index];
        
        for (int i = index; i >= 0; --i)
        {
            if(s[i] == temp)
                count++;
            else
                break;
        }
        for (int i = index+1; i < n; ++i)
        {
            if(s[i] == temp)
                count++;
            else
                break;
        }
        cout << count << endl;
    }



    return 0;
}
