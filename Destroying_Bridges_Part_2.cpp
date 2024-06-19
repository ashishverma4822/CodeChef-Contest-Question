#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        long long C;
        cin >> N >> C;
        
        vector<long long> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        
        // Sort the array A to get the minimum cost for bridges
        sort(A.begin(), A.end());
        
        // Calculate the total cost of destroying bridges
        long long total_cost = 0;
        for (int i = 1; i < N; ++i) {
            total_cost += A[0] * A[i];
        }
        
        // Determine the maximum number of islands Everule can visit
        int min_islands = 1;  // Always can visit island 1
        for (int i = 1; i < N; ++i) {
            if (total_cost <= C) {
                min_islands = i + 1;  // 1-indexed count of islands
            } else {
                break;
            }
            total_cost -= A[0] * A[i];
        }
        
        cout << min_islands << endl;
    }
    
    return 0;
}
