//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using vll = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
void input_output()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    input_output();

    int n;
    cin >> n;
    vs v;
    vi a;
    vs duplicate;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.pb(s);
    }
    
    int count;
    int max = INT32_MIN;
    for (int i = 0; i < v.size(); i++)
    {
        count = 1;
        for (int j = i+1 ; j < v.size(); j++)
        {
            if(v[j] == v[i])
            {
                count++;
                v.erase(v.begin() + j);
                j--;
            }
        }
        a.pb(count);
        duplicate.pb(v[i]);
    }
    //cout << *max_element(a.begin(), a.end()); // highest value of the vector

    cout << duplicate[max_element(a.begin(), a.end()) - a.begin()];

    return 0;
}