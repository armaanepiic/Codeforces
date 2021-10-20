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

    int n, a = 0, b = 0, c = 0;
    cin >> n;
    vi v;
    vi one;
    vi two;
    vi three;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if(x == 1)
        {
            a++;
            one.push_back(i+1);
        }
        else if(x == 2)
        {
            b++;
            two.push_back(i+1);
        }
        else if(x == 3)
        {
            c++;
            three.push_back(i+1);
        }
    }

    int team;

    if(min(a , min(b , c)) == 0)
        cout << 0;
    else
    {
        team = min(a, min(b, c));
        cout << team << endl;
        for (int i = 0; i < team; i++)
        {
            cout << one[i] << " " << two[i] << " " << three[i] << endl;
        }
    }

    
    
    

    return 0;
}