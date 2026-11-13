#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>


using namespace std;

/*
 * Complete the 'climbingLeaderboard' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY ranked
 *  2. INTEGER_ARRAY player
 */

vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player) {
    vector<int> playerRank; 
    vector<int> uniqueRanked; 

    for (int i = 0; i < ranked.size(); i++) {
        if (i == 0) {
            uniqueRanked.push_back(ranked[0]); 
        } else if (ranked[i] != ranked[i - 1]) {
            uniqueRanked.push_back(ranked[i]); 
        }
    }

    int j = uniqueRanked.size() - 1; 

    for (int i = 0; i < player.size(); i++) {
        while (j >= 0 && player[i] >= uniqueRanked[j]) {
            j--;
        }
        
        playerRank.push_back(j + 2);
    }
    
    return playerRank; 
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

    vector<int> ranked(n); 
    for (int i = 0; i < n; i++) {
        cin >> ranked[i];
    }

    int m; 
    cin >> m; 

    vector<int> player(m); 
    for (int j = 0; j < m; j++) {
        cin >> player[j];
    }

    vector<int> result = climbingLeaderboard(ranked, player);

    for (int k = 0; k < result.size(); k++) {
        cout << result[k];
        
        if (k != result.size() - 1) {
            cout << "\n";
        }
    }
    
    cout << "\n";

    return 0;
}