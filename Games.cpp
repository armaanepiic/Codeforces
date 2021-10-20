//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.14159
#define pb push_back
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
    int t = n;

    vector<int> a;
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        a.pb(x);
        b.pb(y);
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j != i)
            {
                if (b[j] == a[i])
                    count++;
            }
        }
    }
    cout << count;

    return 0;
}