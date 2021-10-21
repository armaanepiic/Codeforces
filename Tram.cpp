//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.
    
    
#include <bits/stdc++.h>
using namespace std;
#define     pb          push_back
#define     sortv       sort(v.begin(), v.end())
#define     rev_sortv   sort(v.begin(), v.end(), greater<int>())


using ll    =   long long;
using ull   =   unsigned long long;
using vi    =   vector<int>;
using vll   =   vector<ll>;
using vc    =   vector<char>;
using vs    =   vector<string>;


void input_output()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
}
void lets_code()
{

    int n;
    cin >> n;
    int pass = 0 , min = INT32_MIN;
    int cap;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        pass -= a;
        pass += b;
       // cout << pass << endl;
        if(pass > min){
            cap = pass;
            min = pass;
        }
    }
    cout << cap;
}
int main()
{
    
    
input_output();
    
    
lets_code();
    
    
return 0;
}