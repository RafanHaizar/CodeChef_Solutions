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

int main() {
    double a, b;
    cin >> a >> b;
    char c;
    cin >> c;
    if (c == '/') {
        double cal = a / b;
        cout << fixed << cal << endl;
    } else if (c == '*') {
        cout << a * b << endl;
    } else if (c == '-') {
        cout << a - b << endl;
    } else {
        cout << a + b << endl;
    }
    return 0;
}
