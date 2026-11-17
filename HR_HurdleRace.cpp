#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>


using namespace std;

/*
 * Complete the 'hurdleRace' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER k
 *  2. INTEGER_ARRAY height
 */

int hurdleRace(int k, vector<int> height) {
    int tallestHurdle = *max_element(height.begin(), height.end());

    if (tallestHurdle > k) {
        return tallestHurdle - k;
    } else {
        return 0; 
    }
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

    int n, k; 
    cin >> n >> k; 

    vector<int> height(n); 
    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }

    int result = hurdleRace(k, height); 
    cout << result << "\n";

    return 0;
}