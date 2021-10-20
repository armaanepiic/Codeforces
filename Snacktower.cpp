//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.

#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define endl cout << endl
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

    int n;
    cin >> n;
    vi v;
    for (int i = 0; i < n ; i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }
    int a[100005] = {0};

    int target = n;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == target)
        {
            cout << target << " ";
            target--;
            while (1)
            {
                if(target == 0)
                    break;
                if (a[target] == target){
                    cout << target << " ";
                    target--;
                }
                else
                {
                    endl;
                    break;
                }
            }
        }
        else
        {
            endl;
            a[v[i]] = v[i];
        }
        
    }
    
}
int main()
{

    input_output();

    lets_code();

    return 0;
}