//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.
#include <bits/stdc++.h>
using namespace std;
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

    int n;
    cin >> n;
    int a[n + 1] = {0};
    for (int i = 1; i < n + 1; i++)
    {
        cin >> a[i];
    }

    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;

        a[x - 1] += y - 1;
        a[x + 1] += a[x] - y;
        a[x] = 0;
    }
    
    for (int i = 1 ; i < n + 1; i++)
    {
        cout << a[i] << endl;
    }
    

    return 0;
}