
class Solution {
public:
    bool isPalindrome(int x) {
        int a=x;
        int rev=0;
        if (x<0)
            return false;
        
        else {
            while (x!=0) {
                int last=x%10;
                rev= (rev * 10) + last;
                x=x/10;
                }
            if (a==rev)
                return true;
            else
                false;
            
        }
    }
};