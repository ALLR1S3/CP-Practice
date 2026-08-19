#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>


using namespace std;

/*
 * Complete the 'countApplesAndOranges' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER s
 *  2. INTEGER t
 *  3. INTEGER a: apple tree
 *  4. INTEGER b: orange tree
 *  5. INTEGER_ARRAY apples
 *  6. INTEGER_ARRAY oranges
 */

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {

    int appleCount = 0; 
    for (int i = 0; i < apples.size(); i++) {
        int appleLocation = a + apples[i];
        if (appleLocation >= s && appleLocation <= t) {
            appleCount++; 
        }
    }

    int orangeCount = 0; 
    for (int i = 0; i < oranges.size(); i++) {
        int orangeLocation = b + oranges[i];
        if (orangeLocation >= s && orangeLocation <= t) {
            orangeCount++; 
        }
    }

    cout << appleCount << "\n" << orangeCount;
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

    int s, t; 
    cin >> s >> t; 
    int a, b; 
    cin >> a >> b; 
    int m, n; 
    cin >> m >> n; 

    vector<int> apples(m); 
    for (int i = 0; i < m; i++) {
        cin >> apples[i]; 
    }

    vector<int> oranges(n); 
    for (int i = 0; i < n; i++) {
        cin >> oranges[i]; 
    } 

    countApplesAndOranges(s, t, a, b, apples, oranges);

    return 0;
}