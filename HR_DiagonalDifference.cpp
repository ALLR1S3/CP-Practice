#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

/*
 * Complete the 'diagonalDifference' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY arr as parameter.
 */

int diagonalDifference(vector<vector<int>> arr) {
    
    int n = arr.size(); 
    int leftSum = 0; 
    int rightSum = 0; 

    for (int i = 0; i < n; i++) {
        leftSum += arr[i][i]; 
        rightSum += arr[i][n - 1 - i]; 
    }

    return abs(leftSum - rightSum); 

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
    
    vector<vector<int>> arr(n, vector<int>(n)); 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int result = diagonalDifference(arr);
    cout << result; 

    return 0;
} 