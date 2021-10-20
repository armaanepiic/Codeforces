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

    int a, b;
    cin >> a >> b;
    int d = 6 - max(a, b) + 1;
    int n = 6;
    for (int i = 2; i < 6 ; i++)
    {
        if(d % i == 0 && n % i == 0)
        {
            d /= i;
            n /= i;
        }
    }
    cout << d << "/" << n;

    return 0;
}