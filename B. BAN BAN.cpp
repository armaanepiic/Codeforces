// https://codeforces.com/contest/1747/problem/B

//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.
#include <bits/stdc++.h>
using namespace std;


using ll    =   long long int;
using ull   =   unsigned long long;
using vi    =   vector < int >;
using vll   =   vector < ll >;
using vc    =   vector < char >;
using vs    =   vector < string >;
using vvi   =   vector < vector < int > >;
using vpi   =   vector < pair < int,int > >;
using vvs   =   vector < vector < string > >;






#define     ff              first
#define     ss              second
#define     pb              push_back
#define     mp              make_pair
#define     sz(s)           (s).length()
#define     digits(x)       trunc(log10(x))+1
#define     all(x)          (x).begin(), (x).end()
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




int main()
{


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {

        int n;
        cin >> n;
        vi v;
        if(n%2==0)
        {
            for (int i = 1; i <= 3*n; i+=3){
                if(i == (n*3/2)+1){
                    i+=2;
                }
                v.pb(i);
            }
        }
        else
        {
            for(int i = 1 ; i <= n*3 ; i += 3)
            {
                if(i == floor(n*3/2)){
                    v.pb(i);
                    i--;
                }
                else
                    v.pb(i);
            }
        }
        cout << ceil(n/2.0) << endl;
        for (int i = 0; i < v.size()/2; i++)
        {
            cout << v[i] << ' ' << v[v.size()-1-i] << endl;
        }
        

    }



    return 0;
}
