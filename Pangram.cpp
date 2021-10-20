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

    int n;
    cin >> n;
    string s;
    cin >> s;
    bool flag = true;
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    int a[26] = {0};

    for (int i = 0; i < n; i++)
    {
        a[s[i] - 97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if(a[i] == 0)
        {
            flag = false;
            break;
        }
    }
    if(flag == true)
        cout << "YES";
    else
        cout << "NO";

            return 0;
}