class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        z=0
        original=x
        if x>0:
            y=0
            while x>0:
                y = x%10
                z = z*10+y
                x//=10
            if z==original:
                return True
            else:
                return False
        elif x==0:
            return True
        else:
            return False     
        