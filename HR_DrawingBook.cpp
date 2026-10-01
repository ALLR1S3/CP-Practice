#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>


using namespace std;

/*
 * Complete the 'pageCount' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n (how long the book is)
 *  2. INTEGER p (what page the reader wants to turn to)
 */

int pageCount(int n, int p) {
    int frontTurns = p / 2;

    if (n % 2 == 0) {
        n++;
    }

    int backTurns = (n - p) / 2; 

    return min(frontTurns, backTurns);
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

    int p; 
    cin >> p; 

    int result = pageCount(n, p);
    cout << result << "\n";

    return 0;
}