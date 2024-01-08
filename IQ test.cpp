// Arman Hossain C193033
// Programming is fun with emotion
// https://codeforces.com/contest/25/problem/A
#include <bits/stdc++.h>
using namespace std;

using ll = long long int;
using ull = unsigned long long;
using vi = vector<int>;
using vll = vector<ll>;
using vc = vector<char>;
using vs = vector<string>;
using vvi = vector<vector<int>>;
using vpi = vector<pair<int, int>>;
using vvs = vector<vector<string>>;

#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define sz(s) (s).length()
#define digits(x) trunc(log10(x)) + 1
#define all(x) (x).begin(), (x).end()
#define sumvec(x) accumulate((x).begin(), (x).end(), 0)
#define uniq_element(x) unique((x).begin(), (x).end()) - (x).begin()
#define rev_sort(x) sort((x).begin(), (x).end(), greater<int>())
#define maxelement(x) max_element((x).begin(), (x).end()) - (x).begin()
#define minelement(x) min_element((x).begin(), (x).end()) - (x).begin()

int dx[8] = {1, -1, 0, 0, 1, 1, -1, -1};
int dy[8] = {0, 0, 1, -1, 1, -1, 1, -1};


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int even = 0, odd = 0;
    int arr[101];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    if(even > odd){
        for (int i = 0; i < n; i++)
        {
            if(arr[i] % 2 == 1){
                cout << i + 1;
                break;
            }
        }
    }else{
        for (int i = 0; i < n; i++)
        {
            if(arr[i] % 2 == 0){
                cout << i + 1;
                break;
            }
        }
        
    }
    

    return 0;
}
