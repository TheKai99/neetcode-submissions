class Solution {
/*

i        j         k         l
"bat" , "bag"   , "bank" ,  "band"
[o][]    [1][]     [2][]     [3][]

*/

public:
    string longestCommonPrefix(vector<string>& strs) {

        string result = "";

        string first = strs[0];

        for(int i = 0; i< first.size(); i++){

            for(int j = 1;j<strs.size(); j++){
                if(i==strs[j].size() || strs[0][i] != strs[j][i]){
                    return result;
                }
            }
            result = result + strs[0][i];
        }
        return result;



        
    }
};