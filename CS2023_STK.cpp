#include <bits/stdc++.h>
using namespace std;

int max_streak(int arr[], int n) {
    int maxStreak = 0, currentStreak = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] > 0) {
            currentStreak++;
            maxStreak = max(maxStreak, currentStreak);
        } else {
            currentStreak = 0;
        }
    }
    return maxStreak;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int* a = new int[n];
        int* b = new int[n];

        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        int omStreak = max_streak(a, n);
        int addyStreak = max_streak(b, n);

        if(omStreak > addyStreak) {
            cout << "OM\n";
        } else if(addyStreak > omStreak) {
            cout << "ADDY\n";
        } else {
            cout << "DRAW\n";
        }

        delete[] a;
        delete[] b;
    }

    return 0;
}
