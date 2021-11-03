//योगस्थः कुरु कर्माणि सङ्गं त्यक्त्वा धनञ्जय।//
//सिद्धयसिद्धयोः समो भूत्वा समत्वं योग उच्यते।।//


/*भावार्थ: श्री कृष्ण कहते हैं कि हे अर्जुन, सफलता
और असफलता के मोह को त्याग कर,
अपने कार्य को पूरे मन से समभाव से करो।
समभाव की इस भावना को योग कहते हैं।*/


/*author - Aayush Kumar*/



#include<iostream>
#include<vector>
#include<map>
#include<list>
#include<set>
#include<algorithm>
#include<queue>
#include<stack>
#include<cstring>
#include<climits>
#include<cmath>
#include<bitset>
#include<string>
#include<unordered_set>
#include<unordered_map>
#include<cstdlib>
#include<iomanip>
using namespace std;
#define f               first
#define se             second

#define ll long long
#define pb               push_back
#define pie_value 3.14159265358979323846
#define mp               make_pair
#define pii              pair<int,int>
#define vi               vector<int>
#define mii              unordered_map<int,int>
#define pqb              priority_queue<int>
#define pqs              priority_queue< int,vi,greater<int> >
#define setbits(x)       __builtin_popcountll(x)
#define zrobits(x)       __builtin_ctzll(x)
#define mod              1000000007
#define ps(x,y)          fixed<<setprecision(y)<<x
#define all(x) x.begin(),x.end()
#define endl "\n"
#define rep(i,st,en) for(ll i=st;i<en;i++)
#define inf              1e10
#pragma GCC push_options
#pragma GCC optimize ("unroll-loops")
#pragma GCC optimize("O2")
#pragma GCC optimize("O3")
#pragma GCC optimize("Os")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")


#define print(a)        for (auto x : a) cout << x << " "; cout << endl
#define print_upto(a,n)        for(int i=0;i<n;i++)    cout<<a[i]<<" "; cout<<endl
#define take(x,n)           for(int i=0;i<n;i++)  cin>>x[i];

#define watch(x) cout << (#x) << " is " << (x) << "\n"
#define watch2(x,y) cout <<(#x)<<" is "<<(x)<<" and "<<(#y)<<" is "<<(y);

#define w(x)             int x; cin>>x; while(x--)
int  __gcd(int  a , int b) {return b == 0 ? a : __gcd(b, a % b);}
int  powmod(int  a, int  b) {int  res = 1; if (a >= mod)a %= mod; for (; b; b >>= 1) {if (b & 1)res = res * a; if (res >= mod)res %= mod; a = a * a; if (a >= mod)a %= mod;} return res;}




//int mini=*(min_element(all(arr)));

//    int maxi=*(max_element(all(arr)));
//ncr quick way
int combi(int n, int k)
{
    int ans = 1;
    k = k > n - k ? n - k : k;
    int j = 1;
    for (; j <= k; j++, n--)
    {
        if (n % j == 0)
        {
            ans *= (n / j);
        } else if (ans % j == 0)
        {
            ans = (ans / j * n);
        } else
        {
            ans = ((ans * n) / j);
        }
    }
    return (ans);
}



bool prime[100005];
void SieveOfEratosthenes(int n)
{

    memset(prime, true, sizeof(prime));

    for (int p = 2; p * p <= n; p++)
    {
        // If prime[p] is not changed,
        // then it is a prime
        if (prime[p] == true)
        {

            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

}
int lcm (int  a, int  b)
{
    return (a / __gcd(a, b)) * b;
}






int gcd(int a, int b, int& x, int& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}
bool find_any_solution(int a, int b, int c, int &x0, int &y0, int &g) {
    g = gcd(abs(a), abs(b), x0, y0);
    if (c % g) {
        return false;
    }

    x0 *= c / g;
    y0 *= c / g;
    if (a < 0) x0 = -x0;
    if (b < 0) y0 = -y0;
    return true;
}

// bool checkperfectsquare(int n)
// {


//     // square
//     if (ceil((double)sqrt(n)) == floor((double)sqrt(n))) {
//         return true;
//     }
//     else {
//         return false;
//     }
// }


bool check(int a, int b, int c) {

    int g = __gcd(a, b);
    if (c % g) {cout << "NO" << "\n"; return false ;}
    while (c % b && c > 0) c -= a;
    if (c >= 0) return true;
    else return false;




}


string test(string str, int n)
{
    return str.erase(n, 1);
}


int increment(int x) {  return (x - 1); }
void solve() {

    int n;
    cin >> n;
    vector<int>arr;
    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;
        arr.pb(c);
    }

    int co = 0;
    int cz = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            cz++;
        } else {
            co++;
        }
    }

    if (cz >= co) {
        cout << cz << endl;
        for (int i = 0; i < cz; i++) {
            cout << "0" << " ";
        }
        cout << endl;
        return;
    }

    else {
        if (co & 1) {
            co--;
        }
        cout << co << endl;
        for (int i = 0; i < co; i++) {
            cout << "1" << " ";
        }
        cout << endl;
        return;
    }







}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    // freopen("hello.txt", "r", stdin);
    //freopen("op.txt.txt", "w", stdout);





    int t ;

// t = 1;
    cin >> t;





    for (int i = 1; i <= t; i++)
    {
        solve();
    }


    cerr << "time taken : " << (float)clock() / CLOCKS_PER_SEC << " secs" << "\n";





    return 0;
}