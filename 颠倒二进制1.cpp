class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t a=0;
        int i=32;
        while(i--)
        {
            a<<=1;
            a+=n&1;
            n>>=1;
        }
        return a;
    }
}
