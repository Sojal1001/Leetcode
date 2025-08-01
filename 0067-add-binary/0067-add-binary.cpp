class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.length() - 1, j = b.length() - 1, carry = 0;
        string sum = "";

        while(i >= 0 || j >= 0 || carry) {
            int bit1 = (i >= 0) ? a[i] - '0' : 0;
            int bit2 = (j >= 0) ? b[j] - '0' : 0;
            int total = bit1 + bit2 + carry;
            sum = char(total % 2 + '0') + sum;
            carry = total / 2;
            i--;
            j--;
        }

        return sum;
    }
};
