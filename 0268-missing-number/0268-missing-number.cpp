class Solution {
public:
    int missingNumber(vector<int>& a) {
        int n = a.size();
        int xor1=0, xor2=0;
        for(int i = 0; i<n; i++){
            xor1 ^= i;
            xor2 ^= a[i];
        }
        xor1 = xor1^n;
        return xor1^xor2;
    }
};