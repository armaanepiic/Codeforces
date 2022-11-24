//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.
// https://codeforces.com/contest/1462/problem/C
#include <bits/stdc++.h>
using namespace std;


using ll    =   long long int;
using ull   =   unsigned long long;
using vi    =   vector < int >;
using vll   =   vector < ll >;
using vc    =   vector < char >;
using vs    =   vector < string >;
using vvi   =   vector < vector < int > >;
using vpi   =   vector < pair < int, int > >;
using vvs   =   vector < vector < string > >;






#define     ff              first
#define     ss              second
#define     pb              push_back
#define     mp              make_pair
#define     sz(s)           (s).length()
#define     digits(x)       trunc(log10(x))+1
#define     all(x)          (x).begin(), (x).end()
#define     sortv           sort(v.begin(), v.end())
#define     sumvec(x)       accumulate((x).begin() , (x).end() , 0)
#define     rev_sortv       sort(v.begin(), v.end(), greater<int>())
#define     maxelement(x)   max_element(v.begin(),v.end()) - v.begin()
#define     minelement(x)   min_element(v.begin(),v.end()) - v.begin()
#define     out(v)          for(auto value:v){cout<<value<<" ";}cout<<endl;
#define     inv             vi v;for(int i = 0; i < n; ++i){int x;cin >> x; v.pb(x);};
#define     pout(p)         for(auto value:p){cout<<value.ff<<" "<<value.ss<<endl;}cout<<endl;
// string to int stoi(x)
// int/double to string to_string(x)


int dx[8] = {1, -1, 0,  0, 1,  1, -1, -1};
int dy[8] = {0,  0, 1, -1, 1, -1,  1, -1};
string alpha = " abcdefghijklmnopqrstuvwxyz";


void printVec(vector<int>v)
{
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[v.size() - i - 1];
    }
    cout << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("F:input.txt", "r", stdin);
    freopen("F:output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin >> t;
    while (t--) {

        bool flag = true;
        ll count = 0;
        int sum=0, temp;
        vector < int > v{9, 8, 7, 6, 5, 4, 3, 2, 1};
        vector < int > s;
        int n;
        cin >> n ;
        if (n > 45)
            cout << -1 << endl;
        else if (n < 10)
            cout << n << endl;
        else
        {
            for (int i = 0; i < v.size() - 1; ++i)
            {
                int temp = sumvec(s);
                s.pb(v[i]);
                for (int j = i+1; j < v.size(); ++j)
                {
                    sum = temp + v[i] + v[j];
                    if(sum == n)
                    {
                        s.pb(v[j]);
                        flag = false;
                        break;
                    }
                }
                if(flag == false)
                    break;
            }
            printVec(s);
        }

    }



    return 0;
}
