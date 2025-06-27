/**
 * @tagline Bismillahi Allahuakbar, JOY BANGLA!!!
 * @author Rafan
 * OIA IOAAA OIIIII
 *             - Cat
 * Free Palestine!
 * May Allah help our brothers and sisters all around the globe. Amin.
 */

#include <bits/stdc++.h>


using namespace std;

typedef long long ll;
typedef double dbl;
typedef string str;

str output_header = " ----OUTPUT----- ";
str spp = " ";
str yes = "YES";
str no = "NO";
vector < long long int > dp;

#define opp_endl(condition)((condition) ? (cout << yes << endl << flush) : (cout << no << endl << flush))
#define opp(condition)((condition) ? (cout << yes << flush) : (cout << no << flush))

vector < int > sieve;

bool disqual(vector < int > disqualified, int i) {
    if (find(disqualified.begin(), disqualified.end(), i) != disqualified.end()) {
        return true;
    }
    return false;
}

int check(int n, int k, int data[]) {
    int arr[n + 1];
    vector < int > disqualified;
    for (int i = 0; i < n + 1; i++) {
        arr[i] = 0;
    }
    for (int i = 0; i < n; i++) {
        if (data[i] == i + 1) {
            disqualified.push_back(data[i]);
        }
    }

    for (int i = 0; i < n; i++) {
        arr[data[i]]++;
    }

    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (arr[i] >= k && !disqual(disqualified, i)) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int n, k;
        cin >> n >> k;
        int data[n];
        for (int i = 0; i < n; i++) {
            cin >> data[i];
        }
        cout << check(n, k, data) << endl;
    }
    return 0;
}
