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

    string s , a = "";
    cin >> s;
    int j = 0;
    for (int i = 1; i <= 5; ++i)
    {
        if(i == 1)
        {
            for ( ; j < sz(s); ++j)
            {
                if(s[j] == 'h'){
                    a += "h";
                    j++;
                    break;
                }
            }
        }
        else if(i == 2)
        {
            for ( ; j < sz(s); ++j)
            {
                if(s[j] == 'e'){
                    a += "e";
                    j++;
                    break;
                }
            }
        }else if(i == 3)
        {
            for ( ; j < sz(s); ++j)
            {
                if(s[j] == 'l'){
                    a += "l";
                    j++;
                    break;
                }
            }
        }else if(i == 4)
        {
            for ( ; j < sz(s); ++j)
            {
                if(s[j] == 'l'){
                    a += "l";
                    j++;
                    break;
                }
            }
        }else if(i == 5)
        {
            for ( ; j < sz(s); ++j)
            {
                if(s[j] == 'o'){
                    a += "o";
                    j++;
                    break;
                }
            }
        }
    }
    if (a == "hello")
        cout << "YES";
    else
        cout << "NO";


    return 0;
}
