//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
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
int main()
{
    input_output();

    // qwertyuiopasdfghjkl;zxcvbnm, ./
    // asdfghjkl;
    // zxcvbnm, ./

    char ch;
    cin >> ch;
    string s;
    cin >> s;
    string v = "qwertyuiopasdfghjkl;zxcvbnm,./";

    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < v.length(); j++)
        {
            if(s[i] == v[j] && ch == 'R')
                cout << v[j - 1];
            else if (s[i] == v[j] && ch == 'L')
                cout << v[j + 1];
        }
    }
    

    return 0;
}