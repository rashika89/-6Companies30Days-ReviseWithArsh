class Solution {
public:
    string getHint(string se, string gu) {
        int bull=0;
        string ans;
        unordered_map<char,int>mp;
        for(int i=0;i<se.size();i++){
            if(se[i]==gu[i])bull++; 
            else
            mp[se[i]]++;    
        }
        ans+=to_string(bull);
        ans+='A';
        int cow=0;
        for(int i=0;i<gu.size();i++){
            if(se[i]!=gu[i] && mp[gu[i]]){
                cow++;
            mp[gu[i]]--;
            }
        }
        ans+=to_string(cow);
        ans+='B';
        return ans;

    }
};
