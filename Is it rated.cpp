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
    int n;
    cin >> n;
    bool flag = true;
    bool decrease = true;
    int min = INT32_MAX;
    for (size_t i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if(a <= min)
        {
            min = a;
        }
        else
        {
            decrease = false;
        }
        
        if (a != b)
            flag = false;
    }
    if (flag == false)
        cout << "rated";
    else
    {
        if(decrease == false)
            cout << "unrated";
        else
            cout << "maybe";
    }
}
int main()
{

    input_output();

    lets_code();

    return 0;
}