// import java.util.Stack;
// class Solution {
//     public int[] dailyTemperatures(int[] temperatures) {
//         Stack <Integer> warm = new Stack<>();
//         int n = temperatures.length;
//         int[] answer = new int[n];
//         for(int i=0; i<n; i++){
//             while(!warm.isEmpty() && temperatures[i]>temperatures[warm.peek()]){
//                 int index = warm.pop();
//                 answer[index] = i - index;
//             }
//         warm.push(i);
//         }
//         return answer;
//     }
// }

class Solution {
    public int[] dailyTemperatures(int[] temperatures) {
        int n = temperatures.length;
        int[] answer = new int[n];
        int hottest = 0; // Track the hottest temperature seen from the right
        
        for (int i = n - 1; i >= 0; i--) { 
            if (temperatures[i] >= hottest) {
                hottest = temperatures[i]; 
                answer[i] = 0; // No warmer day ahead
            } else {
                int days = 1;
                while (temperatures[i + days] <= temperatures[i]) {
                    days += answer[i + days]; // Skip ahead using answer array
                }
                answer[i] = days;
            }
        }
        return answer;
    }
}
