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

    string s;
    getline(cin, s);
    int a[27] = {0};
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] >= 97 && s[i] <= 122)
        {
            a[s[i] - 96] = 1;
        }
    }
    for (int i = 1 ; i < 27 ; i++)
    {
        if(a[i] == 1)
            count++;
    }
    cout << count;

    return 0;
}