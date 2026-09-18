#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>


using namespace std;

/*
 * Complete the 'dayOfProgrammer' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts INTEGER year as parameter.
 */

string dayOfProgrammer(int year) {
    string day;

    if (year < 1918) {
        if (year % 4 == 0) {
            day = "12.09." + to_string(year);
        } else {
            day = "13.09." + to_string(year);  
        }

    } else if(year == 1918) {
        day = "26.09.1918"; 

    } else {
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
            day = "12.09." + to_string(year);
        } else {
            day = "13.09." + to_string(year); 
        }
    }
    
    return day; 
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

    int year; 
    cin >> year;

    string result = dayOfProgrammer(year);
    cout << result << "\n";

    return 0;
}