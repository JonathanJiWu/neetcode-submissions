#include <algorithm>
#include <unordered_map>

class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        //A: BRUTE, sort both and compare, T: log(n * logn), S: log(1)

        // std::sort(s.begin(), s.end());//what is the time complicity of this sort?
        // std::sort(t.begin(), t.end());
        // return s == t;//what is the time complicity of this compare?

        
        //B: FREQUNCY COUNTER with HASHMAP, key: char, value: num of this char, compare hashMaps

        // if (s.length() != t.length()) {return false;}

        // std::unordered_map<char, int> freqencyCounterS;
        // std::unordered_map<char, int> freqencyCounterT;
        // for (int i = 0; i < s.length(); i++)
        // {
        //     freqencyCounterS[s[i]]++;//char
        //     freqencyCounterT[t[i]]++;
        // }
        // for (const auto& item : freqencyCounterS)
        // {
        //     std::cout << item.first << " " << item.second << "   ";

        // }
        // std::cout << endl;
        // for (const auto& item : freqencyCounterT)
        // {
        //     std::cout << item.first << " " << item.second << "    ";

        // }
        // return freqencyCounterS == freqencyCounterT;


        //C: offset a middle line from both sides
        //make a array, 26 zeros, index as alphaOrder, value as offsets; use strings to offset form two directions

        if (s.length() != t.length()){ return false;}
        int middleLine[26]{};
        for (int i = 0; i < s.length(); i++)
        {
            middleLine[s[i] - 'a']++;
            middleLine[t[i] - 'a']--;
        }
        for (int item : middleLine)
        {
            if (item != 0){ return false;}

        }
        return true;//the array is touched or not => how do I find out if it's touched => grandSum is zero? => no all items has to be zero





        


        






    }
};
