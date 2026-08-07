#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>


using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    /* 
     * Given: 12 hour am/pm time. Convert: 24 hour time 
     * Rule 1: Morning stays the same
     * Rule 2: Noon stays the same 
     * Rule 3: >= 1:00:00 pm add 12 to the hour
     * Rule 4: Midnight is 00:00:00
     */

    string firstDigits = s.substr(0, 2);
    string remainingDigits = s.substr(2, 6);
    string timeOfDay = s.substr(8, 2); 

    int h = stoi(firstDigits);

    if (timeOfDay == "AM") {
        if (h == 12) h = 0;
    }

    else { 
        if (h != 12) h += 12;
    }

    if (h < 10) firstDigits = "0" + to_string(h); 

    else firstDigits = to_string(h);

    return firstDigits + remainingDigits; 
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

    string s;
    cin >> s;
    string convertedTime = timeConversion(s);
    cout << convertedTime;

    return 0;
}