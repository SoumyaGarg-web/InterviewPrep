class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        
        vector<int>v;
        int t,i;
        t = check(n);
        for(i=1;i<n;i++){
            if(n==t){
                if(check(t-check(i))+check(i)==t){
                    v.push_back(i);
                    v.push_back(n-i);
                    return v;
                }
            }
            else{
                if(check(n-t)+t==n){
                    v.push_back(t);
                    v.push_back(n-t);
                    return v;
                }
                else if(check(n-check(i))+check(i)==n){
                    v.push_back(i);
                    v.push_back(n-i);
                    return v;
                }
            }
        }
        
        return v;
    }
    
    int check(int n){
        string s;
        int k;
        while(n!=0){
                if(n%10!=0){
                    s.push_back('0'+n%10);
                }
                n=n/10;
        }
        reverse(s.begin(),s.end());
        k = stoi(s);
        return k;
    }
};
