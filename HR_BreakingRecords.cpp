#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>


using namespace std;

/*
 * Complete the 'breakingRecords' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY scores as parameter.
 */

vector<int> breakingRecords(vector<int> scores) {
    int highest = scores[0];
    int lowest = scores[0];

    int highRecord = 0; 
    int lowRecord = 0; 

    for (int i = 1; i < scores.size(); i++) {
        if (scores[i] > highest) {
            highRecord += 1; 
            highest = scores[i];
        }

        if (scores[i] < lowest) {
            lowRecord += 1; 
            lowest = scores[i];
        }
    }

    vector<int> numRecords; 
    numRecords.push_back(highRecord);
    numRecords.push_back(lowRecord); 

    return numRecords; 
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

    vector<int> scores(n);
    for (int i = 0; i < n; i++) {
        cin >> scores[i]; 
    }

    vector<int> result = breakingRecords(scores);
    for (int num : result) {
        cout << num << " ";  
    }

    cout << endl;

    return 0;
}