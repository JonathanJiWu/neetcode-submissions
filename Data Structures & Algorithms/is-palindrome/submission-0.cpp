#include <cctype>

class Solution {
public:
    bool isPalindrome(string s) 
    {
        //#A: Brute. flip and check, T: log(n), S: log(n)
        string flippedString;
        string trimedString;

        std::cout << "s.length(): " << s.length() << endl;
        for (int i = s.length() - 1; i >= 0; i--)//"opps"; 0, 1, 2, 3; 
        {
            std::cout << "i: " << i << endl;
            //std::tolower(s[i]);
            if (std::isalnum(s[i]))//case-insensitive and ignores all non-alphanumeric characters => how to check if a char is a alphanumeric character? and how to change a letter into a lower case
            {
                flippedString += std::tolower(s[i]);//append
            }
            if (std::isalnum(s[s.length() - i - 1]))
            {
                trimedString += std::tolower(s[s.length() - i - 1]);
            }
        }//reverse the string => how to reverse a string in C++ => loop?
        //std::cout << s << endl;
        // std::cout << "i: " << i << endl;
        // std::cout << "s.length() - i: " << s.length() - i << endl;
        // std::cout << "s[i - s.length() + 1]: " << s[s.length() - i] << endl;
        std::cout << flippedString << endl;
        std::cout << trimedString << endl;
        return flippedString == trimedString;//check with the original string
    }
};
