class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string code[26] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        set<string>s;
        
        int N = words.size();
        for(auto word:words){
            string temp;
            int n = word.size();
            for(auto c:word){
                temp.append(code[c-'a']);
            }
            if(s.find(temp) == s.end()){
                s.insert(temp);
            }
        }
        return s.size();
    }
};