class Solution {
public:
    int maxDepth(string s) {
        int maxi=0;
        int n=s.size();
        stack<char>st;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push(s[i]);
            
            maxi=max(maxi,(int)st.size());
            }
            else if( s[i]==')'){
                st.pop();

            }
        }
        return maxi;
        
    }
};