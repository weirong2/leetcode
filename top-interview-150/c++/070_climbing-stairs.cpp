class Solution {
public:
    int climbStairs(int n) {
        int t1 = 0, t2 = 1, nextTerm = 0;
        if (n==1) return 1;
        if (n==2) return 2;
        for (int i = 1; i <= n; ++i) {
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
        return nextTerm;
    }
};