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
    int n, k;
    cin >> n >> k;
    string s = "abcdefghijklmnopqrstuvwxyz";

    int count = 0;
    for (int i = 0; i < 27 ; i++)
    {
        cout << s[i];
        count++;
        
        if(count == n)
            break;
        if(i == k-1)
            i = -1;
    }
    
    return 0;
}