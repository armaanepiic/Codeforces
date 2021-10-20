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
    char a[n][n];
    char x, y;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if (i == 0 && j == 0)
                x = a[i][j];
        }
    }
    int b[27] = {0};
    int diagonal = 0;
    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || j == n - i - 1)
            {
                if (a[i][j] == x)
                {
                    diagonal++;
                }
            }
            else
            {
                if (a[i][j] == x)
                {
                    flag = false;
                    break;
                }
                int temp;
                temp = a[i][j] - 96;
                b[temp] = 1;
            }
        }
    }
    if (flag == false)
        cout << "NO";
    else
    {
        /* code */
        int count = 0;
        if (diagonal == 2 * n - 1)
        {
            for (int i = 1; i < 27; i++)
            {
                if (b[i] == 1)
                    count++;
            }
            if (count == 1)
                cout << "YES";
            else
                cout << "NO";
        }
        else
            cout << "NO";
    }
}
int main()
{

    input_output();

    lets_code();

    return 0;
}