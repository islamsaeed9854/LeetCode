class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string sum_string_1 = "" , sum_string_2 = "";
        for(auto i : word1 )
            sum_string_1 += i;
        for(auto i : word2)
            sum_string_2 += i;
        if(sum_string_1 == sum_string_2)
            return true;
        else return false;
    }
};