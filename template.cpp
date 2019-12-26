/*
 * Template: github.com/DimasKovas/cp-templates
 */

#include <bits/stdc++.h>

using namespace std;

#define endl '\n'
#define pb push_back

#define fr first
#define sc second

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define next _reserved_0
#define prev _reserved_1
#define y0   _reserved_2
#define y1   _reserved_3
#define fpos _reserved_4

using ll = long long;
using ull = unsigned long long;
using ld = double;

const ld Pi = acosl(-1.0);
const ll OO = (ll)1e+18 + 100;
const int oo = (int)1e+9 + 100;

template<typename T, T Def>
T makeVec() { return Def; }

template<typename T, T Def = T(), typename ...Args>
auto makeVec(int sz, Args ...ar) { return vector(sz, makeVec<T, Def>(ar...)); }

template <typename T>
inline ostream &operator<<(ostream &out, const vector<T> &v) {
  for (const auto &it : v) out << it << ' ';
  return out;
}

template <typename T>
inline istream &operator>>(istream &in, vector<T> &v) {
  for (auto &it : v) in >> it;
  return in;
}

template <typename T1, typename T2>
inline ostream &operator<<(ostream &out, const pair <T1, T2> &p) { return out << p.first << ' ' << p.second << ' '; }

template <typename T1, typename T2>
inline istream &operator>>(istream &in, pair <T1, T2> &p) { return in >> p.first >> p.second; }

template <typename T>
inline istream &operator>(istream &in, T &p) { return in >> p; }

template <typename T>
inline ostream &operator<(ostream &out, const T &p) { return out << p; }

template <typename T1, typename T2>
inline bool umin(T1 &a, const T2 &b) { return a > b ? a = b, 1 : 0; }
 
template <typename T1, typename T2>
inline bool umax(T1 &a, const T2 &b) { return a < b ? a = b, 1 : 0; }

#ifdef LOCAL
    #define err(...) cerr << "Line " << __LINE__ << ": ", _dbg(#__VA_ARGS__, __VA_ARGS__), cerr << endl

    string to_string(const string& s) { return '"' + s + '"'; }
    string to_string(const char* s) { return to_string(string(s)); }
    string to_string(bool b) { return b ? "true" : "false"; }
    string to_string(std::vector<bool>::reference b) { return to_string(bool(b)); }
    string to_string(char c) { return "'"s + c + "'"; }
    template <size_t N>
    string to_string(bitset<N> b) {
        stringstream s;
        s << b;
        return s.str();
    }
    // Container's functions should have forward declarations to allow nesting.
    template <typename T> string to_string(T v);
    template <typename T1, typename T2> string to_string(const pair<T1, T2>& p);

    template <typename T1, typename T2>
    string to_string(const pair<T1, T2>& p) { return "{" + to_string(p.first) + ", " + to_string(p.second) + "}"; }

    template <typename T>
    string to_string(T v) {
        bool first = true;
        string res = "[";
        for (const auto &x : v) {
            if (!first) res += ", ";
            first = false;
            res += to_string(x);
        }
        res += "]";
        return res;
    }
     
    pair<string_view, string_view> _dbg_split(string_view names) {
        int cnt = 0, pos = 0, q1 = false, q2 = false, bs = false;
        for (char c : names) {
            if (bs) bs = false;
            else if (c == '\\') bs = true;
            else if (q1) { if (c == '\'') q1 = false; }
            else if (q2) { if (c == '\"') q2 = false; }
            else if (c == '\'') q1 = true;
            else if (c == '\"') q2 = true;
            else if (cnt == 0 && c == ',') break;
            else if (c == '(' || c == '[') ++cnt;
            else if (c == ')' || c == ']') --cnt;
            ++pos;
        }
        auto name = names.substr(0, pos);
        name.remove_prefix(name.find_first_not_of(" \t\n"));
        name.remove_suffix((int)name.size() - 1 - name.find_last_not_of(" \t\n"));
        return {name, names.substr(min<int>(pos + 1, names.size()))};
    }

    void _dbg(string_view names) {}

    template <typename T1, typename ...T2>
    void _dbg(string_view names, const T1 &a, const T2& ...ar) {
        auto [name, rnames] = _dbg_split(names);
        cerr << name << " = " << to_string(a) << "; ";
        _dbg(rnames, ar...);
    }
#else
    #define err(...) ((void)42)
#endif

struct __INIT_C {
    __INIT_C() {
#ifndef LOCAL
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
#endif // not LOCAL
        cout << fixed << setprecision(10);
    }
} __INIT_I;

//--------------------------------REALIZATION---------------------------------\\

int main() {

    return 0;
}
