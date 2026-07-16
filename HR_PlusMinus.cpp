#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>

using namespace std;

/*
 * Complete the 'plusMinus' function below.
 *
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

void plusMinus(vector<int> arr) {

    int n = arr.size(); 

    double zeroCount = 0;
    double posCount = 0; 
    double negCount = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) zeroCount += 1; 
        else if (arr[i] > 0) posCount += 1; 
        else negCount += 1; 
    }

    double zeroRatio = zeroCount / n; 
    double posRatio = posCount / n; 
    double negRatio = negCount / n;

    cout << fixed << setprecision(6);
    cout << posRatio << endl << negRatio << endl << zeroRatio << endl; 
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

    plusMinus(arr); 

    return 0;
}