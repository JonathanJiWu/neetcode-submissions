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

        //2. how can I use hash, what matters is the frquency of the chars, char as key, frequncy as vulue?
        if (s.length() != t.length()) {return false;}
        std::unordered_map<char, int> mapS;//put both string's chars into an ordered map
        std::unordered_map<char, int> mapT;

        for (int i = 0; i < s.length(); i++)//populate both maps, [a, 2], [f, 3][g, 2]
        {
            mapS[s[i]]++; 
            mapT[t[i]]++;
        }
        return mapS == mapT;
    }
};
