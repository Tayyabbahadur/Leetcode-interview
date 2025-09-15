class Solution {
public:
    int romanToInt(string s) {
        int prev=0;
        int total=0;
        int curr = 0;
for (int i = s.size() - 1; i >= 0; i--) {
            switch (s[i]) {
                case 'I': curr = 1; break;
                case 'V': curr = 5; break;
                case 'X': curr = 10; break;
                case 'L': curr = 50; break;
                case 'C': curr = 100; break;
                case 'D': curr = 500; break;
                case 'M': curr = 1000; break;
            }
        
        if(curr>=prev){
            total+=curr;
        }
        else{
            total-=curr;

        }
        prev=curr;
      }
      return total;
    }
};