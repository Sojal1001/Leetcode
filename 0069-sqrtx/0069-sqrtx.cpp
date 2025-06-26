class Solution {
public:
    int mySqrt(int x) {
        if(x==0||x==1){
            return x;
        }
        int number=0;
        for(int i=1;i<=x/2;i++){
            long long j=(long long)i*i;
            if(j==x){
                return i;
            }
            else if(j<x){
                number = i;
            }
            else{
                break;
            }
        }
    return number;
    }
};