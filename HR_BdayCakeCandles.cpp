#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>


using namespace std;

/*
 * Complete the 'birthdayCakeCandles' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY candles as parameter.
 */

int birthdayCakeCandles(vector<int> candles) {
    int tallestCandle = candles[0];
    int numTallest = 0;

    for (int i = 0; i < candles.size(); i++) {
        if (candles[i] > tallestCandle) {
            tallestCandle = candles[i];
            numTallest = 1;
        }

        else if (candles[i] == tallestCandle) {
            numTallest +=1;
        }
    }

    return numTallest;
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

    int result = birthdayCakeCandles(arr);
    cout << result;

    return 0;
}