#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>

using namespace std;

/*
 * Complete the 'staircase' function below.
 *
 * The function accepts INTEGER n as parameter.
 */

void staircase(int n) {

    // staircase of size n 
    // row 1 has n - 1 spaces and 1 #
    // row 2 has n - 2 spaces and 2 # 
    // row n has 0 spaces and n #
    // spaces must start at n - 1 and decrease until spaces = 0
    // #s must start at 1 and increase until #s = n
    
    for (int row = 1; row <= n; row++) {
        //print spaces 
        for (int space = 0; space < n - row; space++) {
            cout << " ";
        }
        //print hastags 
        for (int hash = 0; hash < row; hash++) {
            cout << "#";
        }
        //move to next line
        cout << endl;
    }
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

    staircase(n); 

    return 0;
}