/**
 * @tagline Bismillahi Allahuakbar, JOY BANGLA!!!
 * @author Rafan
 * OIA IOAAA OIIIII
 *             - Cat
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

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (b * c > a) {
        cout << -1;
    } else {
        cout << ((a) - (b * c));
    }
    return 0;
}
