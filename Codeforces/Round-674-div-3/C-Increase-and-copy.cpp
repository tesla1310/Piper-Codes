#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define all(cont) cont.begin(), cont.end()
#define foreach(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define PI 3.1415926535897932384626433832795
#define mod 1000000007
#define boost ios_base::sync_with_stdio(0);cin.tie(NULL);
#define tc int t;cin >> t; while(t--)

typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<pii> vii;
typedef vector<vi> vvi;
typedef map<int, int> mpii;
typedef set<int> seti;
typedef multiset<int> mseti;
typedef unordered_map<int, int> umpii;

typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vll;
typedef vector<vl> vvl;
typedef map<ll, ll> mpll;
typedef set<ll> setl;
typedef multiset<ll> msetl;
typedef unordered_map<ll, ll> umpll;

typedef priority_queue <int> pqi;
typedef priority_queue <ll> pql;

struct hash_pair {
    template <class T1, class T2>
    size_t operator()(const pair<T1, T2>& p) const
    {
        auto hash1 = hash<T1>{}(p.first);
        auto hash2 = hash<T2>{}(p.second);
        return hash1 ^ hash2;
    }
};

typedef unordered_map<pair<int, int>, bool, hash_pair> umpp;

//-------------------------------ACTUAL CODE----------------------------------

int main()
{
    boost

    tc
    {
        long double n; cin>>n;
        long double x = 0;
        ll s = sqrt(n);
        s += 2;
        ll m = INT_MAX;

        for(ll i = 0; i <= s; i++)
        {
            long double y = ((long double) (n)) /((long double) (i + 1));
            y--;
            ll y1 = ceil(y);
            m = min(m, i + y1);
        }

        cout<<m<<'\n';
    }

    return 0;
}

