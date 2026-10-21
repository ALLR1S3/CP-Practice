#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>


using namespace std;

/*
 * Complete the getMoneySpent function below.
 *
 * getMoneySpent has the following parameter(s):
 *  int keyboards[n]: the keyboard prices
 *  int drives[m]: the drive prices
 *  int b: the budget
 * 
 * returns:
 *  int: the maximum that can be spent, 
 *  or -1 if it is not possible to buy both items
 */
int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    int price = 0; 

    for (int i = 0; i < keyboards.size(); i++) {
        for (int j = 0; j < drives.size(); j++) {
            if (keyboards[i] + drives[j] <= b && keyboards[i] + drives[j] > price) {
                price = keyboards[i] + drives[j]; 
            }
        } 
    }

    if (price == 0) {
        price = -1;
    }

    return price;    
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

    int b, n, m;
    cin >> b >> n >> m;

    vector<int> keyboards(n); 
    for (int i = 0; i < n; i++) {
        cin >> keyboards[i];
    }

    
    vector<int> drives(m); 
    for (int j = 0; j < m; j++) {
        cin >> drives[j];
    }

    int result = getMoneySpent(keyboards, drives, b);
    cout << result << "\n";

    return 0;
}