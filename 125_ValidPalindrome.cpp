#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        int left = 0;
        int right = s.length() - 1;

        while (left < right)
        {
            

            if (!isalnum(s[left]))
                left++;

            else if (!isalnum(s[right]))
                right--;

            else
            {
                if (tolower(s[left]) != tolower(s[right]))
                    return false;
                    
                left++;
                right--;
            }
            
        }
        return true;
    }
};

int main()
{
    Solution sol;
    string s = "race a car";
    if (sol.isPalindrome(s))
        cout << "True";
    else
        cout << "False";
}