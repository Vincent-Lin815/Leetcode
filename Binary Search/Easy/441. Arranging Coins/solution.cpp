class Solution {
public:
    int arrangeCoins(int n) {
        long N = 2L * n;
        long k = (int)sqrt(N);
        while(k*k+k < N)k++;
        return k * k + k > N ? (k-1) : k;
    }
};
