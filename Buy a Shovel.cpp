//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi 3.14159
#define pb push_backf

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
    int count = 1;
    for (int i = 1 ; i < 10; i++)
    {
        int temp = n * i;
        if(temp%10 == 0 || temp%10 == k)
            break;
        else
            count++;
    }
    cout << count;
    return 0;
}