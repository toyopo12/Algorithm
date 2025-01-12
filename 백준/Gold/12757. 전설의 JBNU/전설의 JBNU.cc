#include <iostream>
#include <map>

using namespace std;

map<int, int> m;
map<int, int> mm;
int N, M, K;

int JBNU(int key) {
    auto a = mm.lower_bound(-key);
    auto b = m.lower_bound(key);
    if(-(a -> first) == b -> first) {
        if(b -> first <= key + K) return b -> first;
        else return -1;
    }
    else if(b == m.begin()) {
        if(b -> first <= key + K) return b -> first;
        else return -1;
    }
    else if(b == m.end()) {
        if(-(a -> first) >= key - K) return -(a -> first);
        else return -1;
    }
    else {
        bool checka = true;
        bool checkb = true;
        if(-(a -> first) < key - K) checka = false;
        if(b -> first > key + K) checkb = false;
        if(checka && checkb) {
            if(-(a -> first) + b -> first == key << 1) return -2;
            else if(-(a -> first) + b -> first < key << 1) return b -> first;
            else return -(a -> first);
        }
        else if(checka) return -(a -> first);
        else if(checkb) return b -> first;
        else return -1;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> N >> M >> K;
    for(int i = 0; i < N; i++) {
        int Key, Value; cin >> Key >> Value;
        m[Key] = Value;
        mm[-Key] = Value;
    }
    for(int i = 0; i < M; i++) {
        int command; cin >> command;
        if(command == 1) {
            int Key, Value; cin >> Key >> Value;
            m[Key] = Value;
            mm[-Key] = Value;
        }
        else if(command == 2) {
            int Key, Value; cin >> Key >> Value;
            int choice = JBNU(Key);
            if(choice >= 0) {
                m[choice] = Value;
                mm[-choice] = Value;
            }
        }
        else if(command == 3) {
            int Key; cin >> Key;
            int choice = JBNU(Key);
            if(choice == -2) cout << "?";
            else if(choice == -1) cout << "-1";
            else cout << m[choice];
            cout << '\n';
        }
    }
    return 0;
}