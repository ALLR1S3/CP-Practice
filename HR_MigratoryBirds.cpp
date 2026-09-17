#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>


using namespace std;

/*
 * Complete the 'migratoryBirds' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int migratoryBirds(vector<int> arr) {
    vector<int> counts(6, 0);
    int biggestCount = 0;
    int birdType = 0; 
    
    for (int i = 0; i < arr.size(); i++) {
        counts[arr[i]]++;
    }

    for (int j = 1; j <= 5; j++) {
        if (counts[j] > biggestCount) {
            biggestCount = counts[j];
            birdType = j;
        }
    }

    return birdType;
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

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    
    int result = migratoryBirds(arr);
    cout << result << "\n";

    return 0;
}