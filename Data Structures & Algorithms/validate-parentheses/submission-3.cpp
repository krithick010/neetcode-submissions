#include<stack>
class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(char a:s){
            if(a=='['||a=='{'||a=='('){
                stk.push(a);
            } 
            else{
                if(stk.empty()){
                    return false;
                }
                char top=stk.top();
                stk.pop();
                if((a==']'&&top!='[')||(a=='}'&&top!='{')||(a==')'&&top!='(')){
                    return false;
                }
            }
        }
        return stk.empty();
    }
};
