class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        stack<string>st;
      //  int r = s.size()-1;
        for(int i =0 ;i <s.size() ; i++){
            string w;
            if(s[i]==' ')continue;
            while(i < s.size() && s[i]!=' '){
                w +=s[i];
                i++;
            }
            st.push(w);
        }
        while(!st.empty()){
            ans += st.top();
            st.pop();
            if(!st.empty()) ans+=' ';
        }
       return ans;
    }
};