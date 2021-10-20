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
    cin >> s;
    int steps = 0;
    int initial = 97;
    for (int i = 0; i < s.size(); i++)
    {
        int diff = abs(s[i] - initial);
        if (diff <= 12)
        {
            steps += diff;
            initial = s[i];
        }
        else
        {
            steps += 26 - (abs(s[i] - initial));
            initial = s[i];
        }
    }

    cout << steps;
    return 0;
}