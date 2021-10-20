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
    int a[105] = {0};
    int count = 0;
    int t1;
    cin >> t1;
    while (t1--)
    {
        int x;
        cin >> x;
        if(a[x] == 0)
        {
            a[x] = 1;
            count++;
        }
    }
    int t2;
    cin >> t2;
    while (t2--)
    {
        int x;
        cin >> x;
        if(a[x] == 0)
        {
            a[x] = 1;
            count++;
        }
    }
    //cout << count << endl;
    if(count == n)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";
}
int main()
{

    input_output();

    lets_code();

    return 0;
}