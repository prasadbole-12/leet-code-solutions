class Solution {
public:
    int minSwaps(string s) {
        int balance =0;
        int min_balance=0;
        for(char c:s){
            if(c=='['){
                balance++;
            }else{
                balance--;
            }
            min_balance=min(min_balance,balance);
        }
        return (abs(min_balance)+1)/2;
        
    }
};