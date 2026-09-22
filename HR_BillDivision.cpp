#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>


using namespace std;

/*
 * Complete the 'bonAppetit' function below.
 *
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY bill (an array of integers representing the cost of each item ordered)
 *  2. INTEGER k (k: an integer representing the zero-based index of the item Anna doesn't eat)
 *  3. INTEGER b (b: the amount of money that Anna contributed to the bill)
 */

void bonAppetit(vector<int> bill, int k, int b) {
    int total = 0;

    for (int i = 0; i < bill.size(); i++) {
        if (i != k) {
            total += bill[i];
        }
    }

    int correctAmount = total / 2; 

    if (correctAmount == b) {
        cout << "Bon Appetit" << "\n";
    } else {
        cout << b - correctAmount << "\n"; 
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

    int n, k;
    cin >> n >> k;

    vector<int> bill(n);

    for (int i = 0; i < n; i++) {
        cin >> bill[i];
    }

    int b;
    cin >> b;

    bonAppetit(bill, k, b);

    return 0;
}