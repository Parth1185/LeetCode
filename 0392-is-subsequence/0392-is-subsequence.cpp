// class Solution {
// public:
//     bool isSubsequence(string s, string t) {
//         int j=0;
        
//         for(int i=0;i<t.length();i++)
//         {
//             if(s[j]==t[i]) j++;
//         }
//         return (j==s.size());
//     }
// };

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = 0, j = 0;
        
        while (i < s.size() && j < t.size()) {
            if (s[i] == t[j]) {
                i++;
            }
            j++;
        }
        
        return i == s.size(); 
    }
};