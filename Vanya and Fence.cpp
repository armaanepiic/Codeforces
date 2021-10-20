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
    /* #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    input_output();

    int n;
    cin >> n;
    int a = 0, d = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == 'A')
            a++;
        else
            d++;
    }
    if(a > d)
        cout << "Anton";
    else if(d > a)
        cout << "Danik";
    else
        cout << "Friendship";

            return 0;
}