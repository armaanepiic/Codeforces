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
    int a[100009] = {0};
    for (int i = 0; i < n; i++)
        cin >> a[i];

    ull dis , min_dis , max_dis;

    for (int i = 0; i < n; i++)
    {
        if(i == 0)
            min_dis = abs(a[i + 1] - a[i]);
        else if(i == n-1)
            min_dis = a[n - 1] - a[n - 2];
        else
            min_dis = min(abs(a[i] - a[i - 1]), abs(a[i] - a[i + 1]));

        max_dis = max(abs(a[i] - a[0]), abs(a[i] - a[n - 1]));

        cout << min_dis << " " << max_dis << endl;
    }
    return 0;
}