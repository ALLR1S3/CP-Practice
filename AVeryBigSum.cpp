#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

/*
 * Complete the 'aVeryBigSum' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts LONG_INTEGER_ARRAY ar as parameter.
 */

long long aVeryBigSum(vector<long long> ar) {
    
    long long sum = 0; 

    for (int i = 0; i < ar.size(); i++) {
        sum += ar[i];
    }

    return sum; 
}

int main() {
    // 1. Fast I/O: Makes cin and cout much faster
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // 2. Local File Redirect: 
    // This only runs on your PC. It reads from your file instead of you typing.
    // When you paste this into HackerRank, HackerRank ignores this part.
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n; 
    cin >> n;
    
    vector<long long> ar(n); 

    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    cout << aVeryBigSum(ar); 

    return 0;
} 