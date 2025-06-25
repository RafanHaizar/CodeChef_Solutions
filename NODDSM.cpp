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
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int s;
        cin >> s;
        int arr[s];
        int ones = 0, twos = 0;
        for (int ii = 0; ii < s; ii++) {
            cin >> arr[ii];
            if (arr[ii] == 1) {
                ones++;
            } else {
                twos++;
            }
        }
        if (ones % 2 == 0) {
            cout << min(twos,ones/2);
        } else {
            cout << twos;
        }
        cout << endl;
    }
    return 0;
}
