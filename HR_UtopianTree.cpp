#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>


using namespace std;

/*
 * Complete the 'utopianTree' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER n as parameter.
 */

int utopianTree(int n) {
    int treeHeight = 1;

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            treeHeight *= 2; 
        } else {
            treeHeight += 1; 
        }
    }

    return treeHeight; 
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

    int t; 
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n; 

        int result = utopianTree(n);
        cout << result << "\n";
    }

    return 0;
}