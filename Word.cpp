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
    int low = 0, up = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if(islower(s[i]))
            low++;
        else
            up++;
    }
    if(low >= up)
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s;
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << s;
    }
    

    return 0;
}