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
str yes = "Yes";
str no = "No";
vector < long long int > dp;

#define opp_endl(condition)((condition) ? (cout << yes << endl << flush) : (cout << no << endl << flush))
#define opp(condition)((condition) ? (cout << yes << flush) : (cout << no << flush))

vector < int > sieve;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        str v;
        cin >> v;
        int count = 0;
        int current = 0;
        for (int s = 0; s < v.length(); s++) {
            if (v[s] == '1') {
                current++;
            } else {
                if (current > 0) {
                    count++;
                    current = 0;
                }
            }
        }
        if (current > 0) {
            count++;
        }
        cout << count << endl;
    }
    return 0;
}
