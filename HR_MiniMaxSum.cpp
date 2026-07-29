#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>


using namespace std;

/*
 * Complete the 'miniMaxSum' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void miniMaxSum(vector<int> arr) {
    long long totalSum = 0; 

    for (int i = 0; i < arr.size(); i++) {
        totalSum += arr[i];
    }

    long long firstSum = totalSum - arr[0];
    long long minSum = firstSum; 
    long long maxSum = firstSum; 
        
    for (int j = 0; j < arr.size(); j++) {
        long long currentSum = totalSum - arr[j];
        if (currentSum < minSum) minSum = currentSum;
        if (currentSum > maxSum) maxSum = currentSum;
    }


    cout << minSum << " " << maxSum << endl; 
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

    vector<int> arr(5);

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    miniMaxSum(arr);

    return 0;
}