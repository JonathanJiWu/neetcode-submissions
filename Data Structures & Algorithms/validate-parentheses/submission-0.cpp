class Solution {
public:
    bool isValid(string s) 
    {
        std::stack<char> stackOfOpenBrackets {};
        std::unordered_map<char, char> openToClose
        {
            {'}', '{'},
            {']', '['},
            {')', '('}
        };

        //1. push open brackets into the stack
        //2. if close brackets, match them to their opens, and have to be in right sequence

        for (char c : s)
        {
            if (!openToClose.count(c))//open bracket
            {
                stackOfOpenBrackets.push(c);
            }
            else if (!stackOfOpenBrackets.empty() && openToClose[c] == stackOfOpenBrackets.top())//close bracket and it matches the last pushed in open bracket
            {
                stackOfOpenBrackets.pop();
            }
            else
            {
                return false;
            }
        }
        return stackOfOpenBrackets.empty();
    }
};
