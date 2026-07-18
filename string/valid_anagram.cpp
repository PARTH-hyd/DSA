class Solution {
public:
    bool isAnagram(string s, string t) {

        
        if (s.length() != t.length()) return false;// Anagrams must have the same length.

      
        unordered_map<char, int> m1;  // Hash maps to store the frequency of each character.
        unordered_map<char, int> m2;

      
        for (int i = 0; i < s.length(); i++) {
            m1[s[i]]++;  // Count the frequency of characters in the first string.
        }

      
        for (int i = 0; i < t.length(); i++) {
            m2[t[i]]++;  // Count the frequency of characters in the second string.
        }

       
        for (auto x : m1) { // Compare the frequency of every character.
            char ch1 = x.first;
            int freq1 = x.second;

            
            if (m2.find(ch1) != m2.end()) {// If the character exists in both maps,
           
                int freq2 = m2[ch1]; // compare their frequencies.
                if (freq1 != freq2)
                    return false;
            }

           
            else {
                return false; // Character is missing in the second string.
            }
        }

        
        return true;// All characters have matching frequencies.
    }
};
