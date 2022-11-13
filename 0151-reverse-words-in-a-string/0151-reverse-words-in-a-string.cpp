class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        int i=0;
        string temp="";
        while(i<s.size()){
            while(i<s.size() && s[i]!=' '  ){
                temp+=s[i];
                i++;
            }
            if(temp!=""){
                st.push(temp);
                temp="";
            }
            i++;
           
        }
        if(temp!="") st.push(temp);
        string ans="";
        while(!st.empty()){
            ans+=st.top()+' ';
            st.pop();
        }
        ans.pop_back();
        return ans;
    }
};