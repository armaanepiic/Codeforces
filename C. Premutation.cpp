// Bismillahir rahmanir rahim
// Arman Hossain C193033
// Programming is nothing but an addiction.
// https://codeforces.com/contest/1790/problem/C
#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using ull = unsigned long long;
using vi = vector<int>;
using vll = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
using vvi = vector<vector<int>>;
using vpi = vector<pair<int, int>>;
using vvs = vector<vector<string>>;

#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define sz(s) (s).length()
#define digits(x) trunc(log10(x)) + 1
#define all(x) (x).begin(), (x).end()
#define sumvec(x) accumulate((x).begin(), (x).end(), 0)
#define rev_sortv sort(v.begin(), v.end(), greater<int>())
#define maxelement(x) max_element(v.begin(), v.end()) - v.begin()
#define minelement(x) min_element(v.begin(), v.end()) - v.begin()

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> v;
        for (int i = 0; i < n; i++)
        {
            vi vec;
            for (int j = 0; j < n - 1; j++)
            {
                int x;
                cin >> x;
                vec.push_back(x);
            }
            v.push_back(vec);
        }
        vi p;
        int a , b , low;
        map<int, int> m;
        for (int i = 0; i < v.size() - 1; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == 0)
                    m[v[j][i]]++;
                else
                {
                    if(v[j][i] != low){
                        p.pb(v[j][i]);
                        low = v[j][i];
                        break;
                    }
                }
            } 
            if (i == 0)
            {
                bool f = true;
                for(auto val:m)
                {
                    if(f){
                        a = val.first;
                        f = false;
                    }
                    else{
                        b = val.first;
                    }
                }
                if(m[a] > m[b]){
                    p.pb(a);
                    p.pb(b);
                    low = b;
                }
                else{
                    p.pb(b);
                    p.pb(a);
                    low = a;
                }
            }
        }
        for(auto value:p)cout << value << ' ';
        cout << endl;
    }

    return 0;
}
