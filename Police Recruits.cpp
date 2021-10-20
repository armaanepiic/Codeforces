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
    vector<int> v;
    for (int i = 0; i < n ; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int police = 0 , unrated=0;
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i] != -1)
            police+=v[i];
        else if(v[i] == -1 && police == 0)
            unrated++;
        else if(v[i] == -1 && police > 0)
            police--;
    }
    cout << unrated;

    return 0;
}