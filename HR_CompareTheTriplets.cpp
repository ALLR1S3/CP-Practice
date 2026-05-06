#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


/*
 * Complete the 'compareTriplets' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY a
 *  2. INTEGER_ARRAY b
 */

vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int> score(2); 
    for (int i = 0; i < 3; i++) {
        if (a[i] > b[i]) {
            score[0] += 1; 
        }

        if (b[i] > a[i]) {
            score[1] += 1;
        }
    }

    return score; 

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

    vector<int> ara(3);
    for (int i = 0; i < 3; i++) {
        cin >> ara[i];
    }
    
    vector<int> arb(3);
    for (int i = 0; i < 3; i++) {
        cin >> arb[i]; 
    }

    vector<int> result(2);
    result = compareTriplets(ara, arb);
    
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
} 