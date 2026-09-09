#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>


using namespace std;

/*
 * Complete the 'birthday' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY s (the array of numbers)
 *  2. INTEGER d (what sum?)
 *  3. INTEGER m (how many numbers)
 */

int birthday(vector<int> s, int d, int m) {
    int count = 0;    
    
    for (int i = 0; i + m <= s.size(); i++) {
        int sum = 0; 

        for (int j = i; j <= i + m - 1; j++) {
                sum += s[j]; 
        }

        if (sum == d) {
            count += 1;
        }
    }
    
    return count; 
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

    vector<int> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i]; 
    }

    int d, m; 
    cin >> d >> m; 
    
    int result = birthday(s, d, m);
    cout << result << "\n";

    return 0;
}