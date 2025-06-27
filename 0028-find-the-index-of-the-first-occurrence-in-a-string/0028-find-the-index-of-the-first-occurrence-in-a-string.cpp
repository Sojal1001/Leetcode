class Solution {
public:
    int strStr(string haystack, string needle) {
        for(int i=0;i<haystack.length();i++){
            int count=0,j = i;
            if(needle[count]==haystack[i]){
                while(j<haystack.length()&&count<needle.length()&&haystack[j]==needle[count]){
                    count++;
                    j++;
                }
                if(count==needle.length()){
                    return i;
                }
            }
        }
        return -1;
    }
};