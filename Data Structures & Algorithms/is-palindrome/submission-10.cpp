#include <cctype>

class Solution {
public:
    bool isPalindrome(string s) 
    {
        //#A: Brute. flip and check, T: log(n), S: log(n)
        // string flippedString;
        // string trimedString;
        // for (int i = s.length() - 1; i >= 0; i--)//"opps"; 0, 1, 2, 3; 
        // {
        //     if (std::isalnum(s[i]))//case-insensitive and ignores all non-alphanumeric characters => how to check if a char is a alphanumeric character? and how to change a letter into a lower case
        //     {
        //         flippedString += std::tolower(s[i]);//append
        //     }
        //     if (std::isalnum(s[s.length() - i - 1]))
        //     {
        //         trimedString += std::tolower(s[s.length() - i - 1]);
        //     }
        // }//reverse the string => how to reverse a string in C++ => loop?
        // return flippedString == trimedString;//check with the original string

        //B. TWO POINTERS: one goes from the beginning to end, one opppsite driection, 
        //skip non-alpNums, if their lowercaseare are the same till two pointer landed on the same char or touches, palindrome
        //"level"
        //edge case, all non-alpnums
        //if ()
        int i = 0;//pointer #1 starts at 0
        int j = s.length() - 1;//pointer #1 starts at the end => length - 1
        std::cout << s.length() << endl;
        while (i < j )//pointer touches
        {
            while (i < j && !std::isalnum(s[i])){ i++; }
            while (i < j && !std::isalnum(s[j])){ j--; }//move the pointers 

            std::cout << "j: " << j << "   i: " << i << endl;
            std::cout << "s[j]: " << s[j] << "   s[i]: " << s[i] << endl;
 
            if (std::tolower(s[i]) != std::tolower(s[j])) { return false;}//compare the chars

            i++;//advance
            j--;
        }
        return true;
    }
};
