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

    int n , count = 0;
    cin >> n ;
    string s;
    cin >> s;
    for (int i = 0; i < n - 1; i++)
    {
        if(s[i] == s[i+1])
            count++;
    }
    cout << count;
    return 0;
}