#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>


using namespace std;

/*
 * Complete the 'formingMagicSquare' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY s as parameter.
 */

int formingMagicSquare(vector<vector<int>> s) {
    int minCost = INT_MAX;

    vector<vector<vector<int>>> magicSquares = {
        {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},
        {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
        {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
        {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}},
        {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}},
        {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}},
        {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}},
        {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}}
    };

    for (int i = 0; i < 8; i++) {
        int cost = 0; 

        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                cost += abs(s[j][k] - magicSquares[i][j][k]);
            }
        }

        if (cost < minCost) minCost = cost;
    }

    return minCost;
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

    vector<vector<int>> s(3, vector<int>(3)); 
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> s[i][j];
        }
    } 

    int result = formingMagicSquare(s);
    cout << result << '\n'; 
    
    return 0;
}