class Solution {
    public String removeStars(String s) {
        StringBuilder newstr = new StringBuilder();
        for(char ch : s.toCharArray()){
            if(ch== '*'){
                if(newstr.length() > 0){
                    newstr.deleteCharAt(newstr.length() - 1);
                }    
            }
            else {
                    newstr.append(ch);
                }
        }
        return newstr.toString();
    }
}