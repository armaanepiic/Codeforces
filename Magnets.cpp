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

    int n;
    cin >> n;
    vector<char> v;
    for (int i = 0; i < 2*n ; i++)
    {
        string s;
        cin >> s;
        v.pb(s[0]);
        
        i++;
        v.pb(s[1]);
    }
    
    int count = 1;
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i]==v[i+1])
            count++;
    }
    cout << count;

    return 0;
}