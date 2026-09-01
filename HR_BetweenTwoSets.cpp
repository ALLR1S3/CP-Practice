#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>


using namespace std;

/*
 * Complete the 'getTotalX' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */

// Every number in a needs to divide into x
// Every number x needs to divide into b 
// Return the number of x between a and b 
int getTotalX(vector<int> a, vector<int> b) {
    int num = 0; 

    for (int x = a[a.size() - 1]; x <= b[0]; x++) {
        bool valid = true; 

        for (int i = 0; i < a.size(); i++) {
            if (x % a[i] != 0) {
                valid = false;      
            } 
        }

        for (int j = 0; j < b.size(); j++) {
            if (b[j] % x != 0) {
                valid = false; 
            }
        }

        if (valid) num++; 
    }
    
    return num; 
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

    int n, m; 
    cin >> n >> m; 

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i]; 
    }

    vector<int> b(m);
    for (int j = 0; j < m; j++) {
        cin >> b[j];
    }

    int result = getTotalX(a, b);
    cout << result << endl;

    return 0;
}