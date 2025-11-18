#include<cctype>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        int start=0;
        int n=s.size();
        int end=n-1;
        
        while(start< end)
        {
            while ( !isalnum(s[start]))
            {
             start++;
            }
            while ( !isalnum(s[end])) 
            {
            end--;
            }

    
            if(s[start]>='A' && s[start]<='Z')
            {
                s[start]=s[start]-'A'+'a';
            }
            if (s[end] >= 'A' && s[end] <= 'Z')
             {
                s[end] = s[end] - 'A' + 'a';
            }
            if(s[start]!=s[end])
            {
                return false;
            }
            else
            {
                start++;
                end--;
            }

        }
        return true;
    }
};
