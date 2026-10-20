class Solution {
public:
/*
s = "racecar"  and t = "carrace"
s -> r-2 , a-2 , c-2 , e-1
t -> r-2 , a-2 , c-2 , e-1

*/


    bool isAnagram(string s, string t) {
        sort(s.begin() , s.end());
        sort(t.begin() , t.end());

        if(s.size() != t.size()) return false;

        int i , j =0 ;
        while(i<s.size() && j<t.size()){

            if(s[i] != t[j]) return false;

            i++;
            j++;
        }

        return true;


};
};
