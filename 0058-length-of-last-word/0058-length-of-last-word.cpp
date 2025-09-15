class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        char b[1000];   
        int j = 0;

        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                b[j++] = s[i];  
                count++;
            } 
            else if (count > 0) {
                break;
            }
        }

        
        for (int k = 0; k < j / 2; k++) {
            swap(b[k], b[j - k - 1]);
        }
        b[j] = '\0'; 

        cout << "the word is \"" << b << "\" has length " << count << endl;

        return count;
    }
};