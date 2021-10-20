// Bismillahir rahmanir rahim
// Arman Hossain C193033
// Programming is nothing but an addiction.

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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool flag = false;
        int l, r;
        if(n == 1)
            cout << -1 << " " << -1 << endl;
        else
        {
            int a = 0 , b = 0 , l = 0 , r = 0;
            for (int i = 2; i <= n; i++)
            {
                for (int j = 0; j <= n-i; j++)
                {
                    int temp = i;
                    int k = j;
                    while (temp--)
                    {
                        if (s[k] == 'a')
                            a++;
                        else
                            b++;
                        k++;
                    }
                    if(a == b)
                    {
                        l = j + 1;
                        r = k ;
                        flag = true;
                        break;
                    }
                    else
                    {
                        a = 0;
                        b = 0;
                    }
                    
                }
                if (flag == true){
                    break;
                }
            }
            if(flag == true)
                cout << l << " " << r << endl;
            else
                cout << -1 << " " << -1 << endl;
        }
        
    }
    
}
int main()
{

    input_output();

    lets_code();

    return 0;
}