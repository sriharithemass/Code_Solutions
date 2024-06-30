class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        int l=s.length();
        for(int i=0;i<l;i++)
        {
            if(isalnum(s[i]))
            str+=tolower(s[i]);
        }
        l=str.length();
        for(int i=0,j=l-1;i<j;i++,j--)
        {
            if(str[i]!=str[j])
            return 0;
        }

        return 1;
    }
};


class Solution {
public:
    bool isPalindrome(string s) {
        int right=s.length()-1;
        int left=0;
        
        while(left<right)
        {
            while(!isalnum(s[left]) && left<right)
            left++;

            while(!isalnum(s[right]) && left<right)
            right--;

            if(tolower(s[left]) != tolower(s[right]))
            return 0;

            left++;
            right--;
        }

        return 1;
    }
};
