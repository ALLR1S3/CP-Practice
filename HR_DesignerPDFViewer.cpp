#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>


using namespace std;

/*
 * Complete the 'designerPdfViewer' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_ARRAY h
 *  2. STRING word
 */

int designerPdfViewer(vector<int> h, string word) {
    int tallest = 0;
    
    for (int i = 0; i < word.length(); i++) {
        int current = word[i] - 'a';
        int converted = h[current]; 

        if (converted > tallest) {
            tallest = converted; 
        }
    }

    return tallest * word.length();
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

    vector<int> h(26); 
    for (int i = 0; i < 26; i++) {
        cin >> h[i];
    }

    string word; 
    cin >> word; 

    int result = designerPdfViewer(h, word); 
    cout << result << "\n";

    return 0;
}