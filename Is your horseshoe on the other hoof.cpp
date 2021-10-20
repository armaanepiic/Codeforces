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

    int a[4];
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    sort(a, a + 4);
    for (int i = 1; i < 4 ; i++)
    {
        if(a[i] == a[i-1])
            count++;
    }
    
    cout << count;

    return 0;
}