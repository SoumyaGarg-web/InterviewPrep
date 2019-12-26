class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string>s;
        int c,i;
        for(i=0;i<tokens.size();i++){
            if(tokens[i]!="+" && tokens[i]!="-" && tokens[i]!="*" && tokens[i]!="/"){
                s.push(tokens[i]);
            }
            else if(!s.empty()){
                int b= stoi(s.top());
                s.pop();
                int a= stoi(s.top());
                s.pop();
                
                if(tokens[i]=="/")
                    c = a/b;
                else if(tokens[i]=="+")
                    c=a+b;
                else if(tokens[i]=="-")
                    c=a-b;
                else if(tokens[i]=="*")
                    c=a*b;
                
                s.push(to_string(c));
            }
        }
        c = stoi(s.top());
        return c;
    }
};
