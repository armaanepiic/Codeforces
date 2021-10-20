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
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    int count = 0;
    int s = 0, d = 0;
    bool flag = true;
    while (!v.empty())
    {
        if(flag == true)
        {
            if(v.front() > v.back()){
                s += v.front();
                v.erase(v.begin());
                flag = false;
            }
            else
            {
                s += v.back();
                v.pop_back();
                flag = false;
            }
        }
        else if(flag == false)
        {
            if (v.front() > v.back())
            {
                d += v.front();
                v.erase(v.begin());
                flag = true;
            }
            else
            {
                d += v.back();
                v.pop_back();
                flag = true;
            }
        }
    }
    //cout << v.front() << endl << v.back();
    cout << s << " " << d;

    return 0;
}