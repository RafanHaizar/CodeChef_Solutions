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
str yes = "NO";
str no = "YES";
vector < long long int > dp;

#define opp_endl(condition)((condition) ? (cout << yes << endl << flush) : (cout << no << endl << flush))
#define opp(condition)((condition) ? (cout << yes << flush) : (cout << no << flush))

vector < int > sieve;

bool check(char v){
    if(v=='a'||v=='e'||v=='i'||v=='o'||v=='u'){
        return false;
    }
    return true;
}

bool check_str(str v,int l){
    int mx=0,cur=0;
    for(int i=0;i<l;i++){
        if(check(v[i])){
            cur++;
        }else{
            mx=max(mx,cur);
            cur=0;
        }
    }
    mx=max(mx,cur);
    cur=0;
    if(mx>3){
        return true;
    }
    return false;
}

int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int l;
        cin>>l;
        str v;
        cin>>v;
        opp_endl(check_str(v,l)==true);
    }
    return 0;
}
