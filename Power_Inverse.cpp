#include <bits/stdc++.h>

using namespace std;

#define cin(vec) for(auto& i : vec) cin >> i
#define cin_2d(vec, n, m) for(int i = 0; i < n; i++) for(int j = 0; j < m && cin >> vec[i][j]; j++);
#define cout(vec) for(auto& i : vec) cout << i << " "; cout << "\n";
#define cout_2d(vec, n, m) for(int i = 0; i < n; i++, cout << "\n") for(int j = 0; j < m && cout << vec[i][j] << " "; j++);
#define cout_map(mp) for(auto& [f, s] : mp) cout << f << "  " << s << "\n";
#define Time cerr << "Time Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";
#define fixed(n) fixed << setprecision(n)
#define ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define fill(vec, value) memset(vec, value, sizeof(vec));
#define Num_of_Digits(n) ((int)log10(n) + 1)
#define mod_combine(a, b, m) (((a % m) * (b % m)) % m)
#define all(vec) vec.begin(), vec.end()
#define rall(vec) vec.rbegin(), vec.rend()
#define sz(x) int(x.size())
#define debug(x) cout << #x << ": " << (x) << "\n";
#define fi first
#define se second
#define Pair pair < int, int >
#define ll long long
#define ull unsigned long long
#define Mod  1'000'000'007
#define OO 2'000'000'000
#define EPS 1e-9
#define PI acos(-1)

void AhMeD_HoSSaM(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
    #endif
}

struct Power_Inverse {
    
    ll n, r, mod;
    vector < ll > fact, inv;

    ll fast_power(ll b, ll e, ll mod){
        ll power = 1;
        while(e){
            if(e & 1) power = mod_combine(power, b, mod);
            e >>= 1, b = mod_combine(b, b, mod);
        }
        return power % mod;
    }

    Power_Inverse(ll N, ll R, ll MOD){
        n = N, r = R, mod = MOD;
        fact.assign(n + 10, 1), inv.resize(n + 10);
        for(ll i = 1; i <= n; i++){
            fact[i] = mod_combine(fact[i - 1], i, mod);
            inv[i] = fast_power(fact[i], mod - 2, mod);
        }
    }

    // Combination

    ll nCr(){
        if(r > n) return 0;
        return (((fact[n] % mod * inv[r] % mod) % mod) * (inv[n - r] % mod)) % mod;
    }

    // Permutation

    ll nPr(){
        if(r > n) return 0;
        return (fact[n] % mod * inv[r] % mod) % mod;
    }

};


void Solve(){
    
}

int main(){
    AhMeD_HoSSaM();
    int t = 1;
    //cin >> t;
    while(t--)
        Solve();
    return 0;
} 