class Solution {
public:
    int possibleStringCount(string word) {
        int count=1;
        int i=0;
        while(i<word.length()){
            if(word[i]==word[i+1]){
                count++;
                i++;
            }
            else{
                i++;
            }
        }
    return count;}
};