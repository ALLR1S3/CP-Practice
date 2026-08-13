#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>


using namespace std;

/*
 * Complete the 'gradingStudents' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY grades as parameter.
 */

vector<int> gradingStudents(vector<int> grades) {
    

    for (int i = 0; i < grades.size(); i++) {
        if (grades[i] >= 38 && grades[i] % 5 >= 3) {
            grades[i] += 5 - grades[i] % 5;
        }   
    } 
       
    return grades; 
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
    
    vector<int> grades(n); 
    for (int i = 0; i < n; i++) {
        cin >> grades[i]; 
    }
     
    vector<int> result = gradingStudents(grades);
    for (int j = 0; j < n; j++) {
        cout << grades[j] << "\n";
    }

    return 0;
}