class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        //Q: would the length of the strings always the same? => seems like yes => no need to check length
        //1. brute force, sort both and compare, sorting twice: T: O(log n) S: O(1)
        // std::sort(s.begin(), s.end());//sort s => how to sort C string, aphabatically?
        // std::sort(t.begin(), t.end());//sort t
        // if (t == s)//compare
        // {
        //     return true;
        // }
        // else
        // {
        //     return false;
        // }

        //2. strings turn into 2 hashmaps, char as key, frequncies as values
        // if (t.size() != s.size()){return false;}

        // std::unordered_map<char, int> mapS;
        // std::unordered_map<char, int> mapT;

        // for (int i = 0; i < s.size(); i++)
        // {
        //     mapS[s[i]]++;//insert value pairs
        //     mapT[t[i]]++;//increate int count if already contained
        // }//populate maps

        // return mapS == mapT;

        //3. offset checker
        if (t.size() != s.size()){return false;}

        std::vector<int> checker(26, 0);//26 elements, all 0, repesenting 26 charactors
        for (int i = 0; i < s.size(); i++)
        {//char has a way can be normalized into ints in C++ =>  '0' has the ASCII code of 48 => just subtract 'a'
            checker[s[i] - 'a']++;//'c' => (ASCII code )checker[2]; s's chars add to checker's respecting element
            checker[t[i] - 'a']--;//t's deduct
        }
        for (int i : checker) { if (i != 0) {return false;}} //easy way to know that checker is not modified? => go through, O(1) anyway

        return true;
    }
};
