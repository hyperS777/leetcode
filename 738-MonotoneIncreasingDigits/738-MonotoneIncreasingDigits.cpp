// Last updated: 28/10/2026, 11:57:44 PM
class Solution {
public:
    int monotoneIncreasingDigits(int n) {
        string s = to_string(n);
        int x = s.size();;

        for(int i=s.size()-1; i>0; i--){
            if(s[i]<s[i-1]){
                s[i-1]--;
                x=i;
            }
        }
        for(int i=x; i<s.size(); i++){
            s[i]='9';
        }

        return stoi(s);
    }
};