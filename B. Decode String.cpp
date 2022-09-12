// https://codeforces.com/contest/1729/problem/B

//Author : Arman Hossain
//Date   : 00 / 00 // 22


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
#define     sortv           sort(v.begin(), v.end())
#define     rev_sortv       sort(v.begin(), v.end(), greater<int>())
#define     inv             vi v;for(int i = 0; i < n; ++i){int x;cin >> x; v.pb(x);};
#define     sz(s)           (s).length()
#define     all(x)          (x).begin(), (x).end()
#define     digits(x)       trunc(log10(x))+1
#define     maxelement(x)   max_element(v.begin(),v.end()) - v.begin()
#define     minelement(x)   min_element(v.begin(),v.end()) - v.begin()



int dx[8] = {1, -1, 0,  0, 1,  1, -1, -1};
int dy[8] = {0,  0, 1, -1, 1, -1,  1, -1};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    
    
    int t;  cin >> t;
    while (t--) {

        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<char>v;
        string a = "0abcdefghijklmnopqrstuvwxyz";
        int temp , m;
        for (int i = n-1; i >= 0; i--)
        {
            temp = int(s[i]) - 48;
            if(temp > 0)
                v.pb(a[temp]);
            else if(temp == 0)
            {
                temp = (s[i-2]-48)*10 + s[i-1]-48 ;
                v.pb(a[temp]);
                i-=2;
            }
        }
        
        for (int i = v.size()-1; i >= 0; i--)
        {
            cout << v[i];
        }
        cout << endl;
        
        
    }
    
    


    return 0;
}
