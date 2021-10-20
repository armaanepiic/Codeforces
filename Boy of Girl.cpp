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
    int count = 0;
    int a[27] = {0};
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if(a[s[i] - 96] == 0)
        {
            a[s[i] - 96] = 1;
            count++;
        }
    }
    if(count % 2 == 1)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";

            return 0;
}