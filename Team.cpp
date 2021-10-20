// Bismillahir rahmanir rahim
// Arman Hossain C193033
// Programming is nothing but an addiction.
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pi 3.14159
#define pb push_back
void input_output()
{
    /* #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int x, y, z, problem;
int main()
{
    input_output();

    int n, count;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y >> z;
        if (x + y + z > 1)
            problem++;
    }
    cout << problem;

    return 0;
}