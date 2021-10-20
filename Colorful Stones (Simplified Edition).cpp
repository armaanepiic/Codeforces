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

    string s, t;
    cin >> s >> t;
    int j = 0;
    for (int i = 0  ; i < t.length() ; i++)
    {
        if(t[i] == s[j])
            j++;
    }
    cout << j + 1;

    return 0;
}