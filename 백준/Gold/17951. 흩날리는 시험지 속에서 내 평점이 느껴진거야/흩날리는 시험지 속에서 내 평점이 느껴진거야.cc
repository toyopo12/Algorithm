//김민서코드

typedef long double ld;
typedef long long ll;
typedef unsigned long long ull;

#define pii pair<int, int>
#define pll pair<ll, ll>
#define println(s) cout << s << "\n"
#define mp() make_pair()
#define PRIME_SIZE 5
#define PIE M_PIf64

#define BOJ
#ifdef BOJ
#define debug(x)  ((void)0);
#define debug_value(x)  ((void)0);
#define fio cin.tie(0);cout.tie(0);ios_base::sync_with_stdio(false);
#else
#define debug(x)  cout << "[Debug] " << x << "\n";
#define debug_value(x)  cout << "[Debug] " << #x << " is " << x << '\n';
#define fio ((void)0);
#endif

#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

struct Direction {
    ll dx;
    ll dy;
};

struct Position {
    ll x;
    ll y;
};

ll fastpow(ll a, ll n, ll c){
    ll result=1;
    while(n){
        if(n&1){
            result *=a;
            if(result>=c) result%=c;
        }
        a*=a;
        if(a>=c) a%=c;
        n>>=1;
    }
    return result;
}

vector<ll> prime_list;
bool is_prime[PRIME_SIZE+1] = {1,1,0}; // 0이 소수
void siv(ll n) {
    for(int i = 2; i <= n; i++) {
        if(!is_prime[i]) prime_list.push_back(i);
        for(auto p : prime_list) {
            if(i*p > n) break;
            is_prime[i*p] = true;
            if(i%p == 0) break;
        }
    }
}

ll n, k;
ll sums[101010] = {0, };

ll find_target(ll start, ll target) {
    if(target > sums[n] - sums[start-1]) {
        return -1;
    }
    // debug("[find_target]: " << (target + sums[start-1]));
    return lower_bound(sums+start, sums+n, target + sums[start-1]) - sums;
}

int main(int argc, char* argv[]) {
    fio;


    cin >> n >> k;

    for(int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        sums[i] = sums[i-1] + x;
    }

    ll left = 1, right = sums[n]+1;
    ll cur_target;
    while(left < right - 1) {
        cur_target = (left + right)/2;

        ll start_index = 1;
        bool is_too_much = false;
        debug(left << " " <<  cur_target << " " << right);
        for(ll i = 0; i < k; i++) {

            ll next_index = find_target(start_index, cur_target);
            if(next_index == -1) {
                is_too_much = true;
                debug("break");
                break;
            }

            debug( start_index << ": " << sums[next_index] - sums[start_index-1]);
            ++next_index;
            start_index = next_index;
        }
        debug("");

        if(is_too_much) {
            right = cur_target;
        }
        else {
            left = cur_target;
        }
    }
    cout << left;
    return 0;
}