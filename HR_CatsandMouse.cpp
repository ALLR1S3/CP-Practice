#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>


using namespace std;

// Complete the catAndMouse function below.
string catAndMouse(int x, int y, int z) {
    
    if (abs(z - x) < abs(z - y)) {
         return "Cat A"; 
    } else if (abs(z-y) < abs(z-x)) {
        return "Cat B";
    } else {
        return "Mouse C";
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

    int q;
    cin >> q; 

    int x, y, z;
    for (int i = 0; i < q; i++) {
        cin >> x >> y >> z;

        string result = catAndMouse(x, y, z);
        cout << result << "\n";
    }
    
    return 0;
}