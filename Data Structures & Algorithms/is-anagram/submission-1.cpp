class Solution {
public:
    bool isAnagram(string s, string t) {

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        int count = 0;

        for(int i = 0; i < s.length(); i++){
            if(s[i] == t[i]){
                count++;
            }
        }

        if(s.length() == t.length()){

            if(count == s.length()){
                return true;
            }

            else{
                return false;
            }

        }
        return false;
    }
};
