// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//     int n;
//     cin >> n;
//     vector<vector<int>> input(n);
 
//     // Read input
//     for (int i = 0; i < n; i++) {
//         int n1;
//         cin >> n1;
//         for (int j = 0; j < n1; j++) {
//             int n2;
//             cin >> n2;
//             input[i].push_back(n2);
//         }
//     }
 
//     // Process each test case
//     for (int t = 0; t < n; t++) {
//         vector<int>& input1 = input[t];
//         sort(input1.begin(), input1.end());
//         int num = input1.size();
//         int maxnum = input1[num - 1];
//         int count = 0;
 
//         // Try all triplets (i < j < k)
//         for (int i = 0; i < num; ++i) {
//             for (int j = i + 1; j < num; ++j) {
//                 for (int k = j + 1; k < num; ++k) {
//                     int sum = input1[i] + input1[j] + input1[k];
//                     if(sum > max(2*input1[k], maxnum)) count++;
//                 }
//             }
//         }
//         cout << count << endl;
//     }
 
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    vector<vector<int>> input(t);

    // Read all test cases
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        input[i].resize(n);
        for (int j = 0; j < n; j++) {
            cin >> input[i][j];
        }
    }

    // Process each test case
    for (int test = 0; test < t; test++) {
        vector<int>& a = input[test];
        int n = a.size();
        sort(a.begin(), a.end());
        int maxnum = a[n - 1];
        long long count = 0;

        // Fix the third element of the triplet: a[k]
        for (int k = 2; k < n; ++k) {
            int threshold = max(2 * a[k], maxnum);

            int i = 0, j = k - 1;

            // Two pointers to count pairs (i, j) such that a[i] + a[j] > threshold
            while (i < j) {
                if (a[i] + a[j] > threshold) {
                    count += (j - i);  // All pairs from i to j-1 are valid with j
                    j--;
                } else {
                    i++;
                }
            }
        }

        cout << count << '\n';
    }

    return 0;
}
