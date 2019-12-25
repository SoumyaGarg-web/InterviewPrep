class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>k(n);
        int i;
        for(i=0;i<n;i++){
            if((i+1)%3==0 && (i+1)%5==0)
                 k[i]="FizzBuzz";
            else if((i+1)%3==0)
               k[i]="Fizz";  
            else if((i+1)%5==0)
                k[i]="Buzz";
            else
                k[i]=to_string(i+1);
        }
        return k;
    }
};
