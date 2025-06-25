class Solution {
public:
    double myPow(double x, int n) {
        double y = pow(x,n);
        if(y>INT_MAX||y<INT_MIN){
            return 0;
        }
        return y;

    }
};