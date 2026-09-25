class Solution {
public:
    bool isAnagram(string s, string t) {

        unordered_map<char , int> mp;

        if(s.length()!= t.length()){
            return false;
        }


        for(int i = 0; i< s.size(); i++){

            mp[s[i]]++;
        }

        for(int j = 0; j< t.size(); j++){

            if(mp.find(t[j]) != mp.end() && mp[t[j]] > 0){
                mp[t[j]]--;
            }

            else{
                return false;
            }
        
        }

        return true;
};
};
