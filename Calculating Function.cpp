//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.

#include <bits/stdc++.h>
using namespace std;
#define pb push_back

#define sortv sort(v.begin(), v.end())
#define rev_sortv sort(v.begin(), v.end(), greater<int>())

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
void lets_code()
{
    string s;
    int a[27] = {0};
    cin >> s;
    for (int i = 0; i < s.length(); ++i)
    {
        a[s[i] - 96] = 1;
    }
    char min;
    for (int i = 1; i < 27; ++i)
    {
        if (a[i] == 1)
        {
            min = 96 + i;
            break;
        }
    }
    char max;
    for (int i = 26; i > 0; --i)
    {
        if (a[i] == 1)
        {
            max = 96 + i;
            break;
        }
    }

    cout << min << endl << max;
}
int main()
{

    input_output();

    lets_code();

    return 0;
}