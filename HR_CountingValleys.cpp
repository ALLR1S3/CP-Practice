#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>


using namespace std;

/*
 * Complete the 'countingValleys' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER steps
 *  2. STRING path
 * 
 * A mountain is a sequence of consecutive steps above sea level, 
 * starting with a step up from sea level and ending with a step down to sea level.
 * 
 * A valley is a sequence of consecutive steps below sea level, 
 * starting with a step down from sea level and ending with a step up to sea level.
 */


int countingValleys(int steps, string path) {
    int elevation = 0; 
    int valleys = 0;

    for (int i = 0; i < path.size(); i++) {
        if (path[i] == 'D') {
            elevation--; 
        } else {
            elevation++; 
        }

        if (elevation == 0 && path[i] == 'U') {
            valleys++;
        }
    }

    return valleys; 
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

    int steps;
    cin >> steps;
    
    string path;
    cin >> path; 

    int result = countingValleys(steps, path);
    cout << result << "\n";

    return 0;
}