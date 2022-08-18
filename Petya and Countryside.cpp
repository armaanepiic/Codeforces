//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.

// https://codeforces.com/contest/66/problem/B


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

   

    int n , l = 0;
    cin >> n;
    inv;
    
    for (int j = 0; j < n; ++j)
    {
        int count = 0 , max = j;
        
        int temp = max;
        
        for (int i = temp + 1; i < n; ++i)
        {
            if (v[i] <= v[temp]) {
                temp = i;
                count++;
            }
            else
                break;
        }

        for (int i = max - 1; i >= 0; i--)
        {
            if (v[i] <= v[max]) {
                max = i;
                count++;
            }
            else
                break;
        }

        count++;
        
        if(count > l)
            l = count;
    }
    cout << l ;


    return 0;
}
