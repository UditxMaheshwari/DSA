class Solution {
public:
bool isVowel(char c) {
        c = tolower(c);
        return c=='a' || c=='e' || c=='i' || c=='o' || c=='u';
    }
    string reverseVowels(string s) {
        int start=0;
        int n=s.size();
        int end=n-1;

        while(start<end)
        {
            while(start<end && !isVowel(s[start]))
            {
                 start++;
            }
            while(start<end && !isVowel(s[end]))
            {
                end--;
            }

          swap(s[start],s[end]);
            start++;
            end--;
        }
        return s;
    }
};
