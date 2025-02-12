class Solution {
public:
    int compress(vector<char>& chars) {
        string s;
        int count = 1;
        
        for(int i = 0; i < chars.size(); i++) {
            
            if (i + 1 < chars.size() && chars[i] == chars[i + 1]) {
                count++;
            } else {
            
                s += chars[i];

            
                if (count > 1) {
                    s += to_string(count);
                }
                count = 1; 
            }
        }

        for (int i = 0; i < s.size(); i++) {
            chars[i] = s[i];
        }

        return s.size(); 
    }
};
