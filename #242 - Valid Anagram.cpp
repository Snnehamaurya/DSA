class Solution {
public:
    bool isAnagram(string s, string t) {
        
        // if(s.size()!=t.size()) return false;
        
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());

        // for(int i = 0 ; i < s.size();i++){
        //     if(s[i]!= t[i]) return false;
        // }
        
        // return true;
        
        
        if(s.size()!=t.size()) return false;
        vector<int> ans(26,0);

        for(int i = 0 ; i < s.size();i++){
            ans[s[i]-'a']++;
        }
        for(int i = 0 ; i < t.size();i++){
            ans[t[i]-'a']--;
        }
        for(int i = 0 ; i < ans.size();i++){
            if(ans[i]!=0) return false;
        }
        return true;
    }
};