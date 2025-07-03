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

void count(int a){
    int odd=0,even=0;
        for(int i=1;i<=a;i++){
            if(a%i==0){
                if(i%2==0){
                    odd++;
                }else{
                    even++;
                }
            }
        }
        cout<<even<<spp<<odd<<endl;
}

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        count(a);
    }
    return 0;
}
