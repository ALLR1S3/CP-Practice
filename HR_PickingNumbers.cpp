#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>


using namespace std;

/*
 * Complete the 'pickingNumbers' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY a as parameter.
 * 
 * Given an array of integers, find the longest subarray 
 * where the absolute difference between any two elements 
 * is less than or equal to 1.
 * 
 * Return: the length of the longest subarray 
 * that meets the criterion
 */

int pickingNumbers(vector<int> a) {
    sort(a.begin(), a.end());

    int maxLength = 0;

    for (int i = 0; i < a.size(); i++) {
        int count = 0;

        for (int j = i; j < a.size(); j++) {
            if (abs(a[i] - a[j]) <= 1) {
                count++;
            }
        }

        maxLength = max(maxLength, count);
    }

    return maxLength;
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

    vector<int> a(n); 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int result = pickingNumbers(a);
    cout << result << '\n'; 
    
    return 0;
}