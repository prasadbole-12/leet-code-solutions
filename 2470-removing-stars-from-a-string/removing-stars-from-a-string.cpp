class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        string ans="";
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='*'){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();

            
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};