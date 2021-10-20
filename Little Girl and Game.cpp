//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.

#include <bits/stdc++.h>
using namespace std;
#define pi 3.14159
#define pb push_back

using ll = long long;
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

    string s;
    cin >> s;
    vi v(26, 0);

    for (int i = 0; i < s.length(); i++)
    {
        v[s[i] - 'a']++;
    }
    

    return 0;
}