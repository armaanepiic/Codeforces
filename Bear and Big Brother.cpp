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
    /* #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    input_output();

    int l, b, count = 0;
    cin >> l >> b;
    while (1)
    {
        l *= 3;
        b *= 2;
        if (l > b)
        {
            count++;
            break;
        }
        else
            count++;
    }
    cout << count;

    return 0;
}