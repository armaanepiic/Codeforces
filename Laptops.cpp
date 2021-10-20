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

    int a[n];
    int b[n];

    for (int i = 0; i < n; ++i)
    {
        cin >> a[i] >> b[i];
    }
    bool flag = false;
    int count = 0;

    for (int i = 0; i < n; ++i)
    {
        if (a[i] < b[i])
        {
            count++;
            int m = i;
            for (int j = 0; j < n; ++j)
            {
                if (j != m)
                {
                    if (a[j] > a[i] && b[j] < b[i])
                    {
                        flag = true;
                        break;
                    }
                }
                if (flag == true)
                    break;
            }
        }
        if (flag == true)
            break;
    }
    if (flag == true)
        cout << "Happy Alex";
    else
        cout << "Poor Alex";

    return 0;
}