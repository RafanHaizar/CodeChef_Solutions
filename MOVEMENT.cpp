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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int x = 0, y = 0;
    x += a;
    y += b;
    x -= c;
    y -= d;
    cout << x << spp << y;
    return 0;
}
