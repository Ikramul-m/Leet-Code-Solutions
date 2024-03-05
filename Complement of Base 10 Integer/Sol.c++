class Solution {
public:
    int bitwiseComplement(int n) {
        int m = n;
        int mirror = 0;

        if (n == 0) {
            return 1;
        }

        for (; m != 0;) {
            mirror = (mirror << 1) | 1;
            m = m >> 1;
        }

        int result = (~n) & mirror;

        return result;
    }
};