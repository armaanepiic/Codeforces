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

    int n, t, k, d;
    cin >> n >> t >> k >> d;
    int total_time = ceil(((double)n * t) / k);
    //cout << total_time << endl;
    int cake = 0;
    int a[total_time + 1] = {0};

    for (int i = 1; 1; i++)
    {
        if (t * i > total_time)
            break;
        else
            a[t * i]++;
    }
    for (int i = t; 1; d += t)
    {
        if (d + i > total_time)
            break;
        else
            a[d + i]++;
    }
    for (int i = 0; i < total_time+1; i++)
    {
        if(a[i] > 0)
            cout << i << " ";
    }
    
    bool flag = false;
    for (int i = 0; i < total_time + 1; i++)
    {
        if(a[i] > 0)
            cake += a[i] * k;
        if( cake >= n )
        {

            if( i < total_time)
            {
                flag = true;
                break;
            }
        }
    }
    if(flag == true)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}