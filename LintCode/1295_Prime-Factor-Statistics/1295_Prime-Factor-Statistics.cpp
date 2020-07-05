class Solution {
public:
    /**
     * @param N: a number
     * @return: the number of prime numbers.
     */
    int Count_PrimeNum(int N) {
        int result = 0;
        vector<int> prime(N + 1, 1); prime[0] = 0; prime[1] = 0;
        vector<bool> visited(N + 1, false);
        for (int i = 2; i <= N; ++i) {
            result += prime[i];
            for (int j = 2; i * j <= N && j <= i; ++j) {
                if (!visited[i * j]) {
                    visited[i * j] = 1;
                    prime[i * j] = prime[i] + prime[j];
                }
            }       
        }
        
        return result;
    }
};