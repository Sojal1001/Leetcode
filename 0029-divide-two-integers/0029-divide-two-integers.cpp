class Solution {
public:
    int divide(int dividend, int divisor) {
        if(INT_MIN < dividend && divisor <= INT_MAX){
            return dividend/divisor;
        }
        else if(dividend == INT_MIN && divisor == -1){
            return INT_MAX;
        }
        else if(dividend == INT_MIN && divisor == 1){
            return INT_MIN;
        }
        if(INT_MIN <= dividend && divisor <= INT_MAX){
            return dividend/divisor;
        }
        else{
            return 0;
        }
    }
};