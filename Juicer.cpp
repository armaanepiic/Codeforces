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
    int n, b, d;
    cin >> n >> b >> d;
    
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x <= b)
            sum += x;
        if(sum > d)
        {
            count++;
            sum = 0;
        }
    }
    cout << count;

    return 0;
}