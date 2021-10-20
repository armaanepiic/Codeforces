//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.

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
    int r, c;
    cin >> r >> c;
    char clr[r][c];
    bool flag = true;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> clr[i][j];
            if (clr[i][j] == 'C' || clr[i][j] == 'M' || clr[i][j] == 'Y')
                flag = false;
        }       
    }
    if(flag == true)
        cout << "#Black&White";
    else
        cout << "#Color";
}
int main()
{

    input_output();

    lets_code();

    return 0;
}