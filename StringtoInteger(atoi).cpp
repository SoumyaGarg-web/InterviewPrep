class Solution {
public:
    int myAtoi(string str) {
        
        vector<int>v;
        
        int i=0;
        int j=str.size()-1;
        long int total=0;
        long int dec =1;
        int sign=0;
        
        while(str[i]==' '){
            i++;
        }
        while(str[i]=='0'){
            i++;
            if(str[i]=='-'|| str[i]=='+')
                return 0;
        }
        if(str[i]=='-'){
            sign=1;
            i++;
            if(str[i]==' ')
                return 0;
            while(str[i]=='0'){
                i++;
            }
        }
        else if(str[i]=='+'){
            sign=0;
            i++;
            if(str[i]==' ')
                return 0;
            while(str[i]=='0'){
                i++;
            }
        }
        if(str[i]>=97 && str[i]<=122){
            return 0;
        }
        while(j!=i-1){
            if(str[j]>=48 && str[j]<=57){
                int k = str[j]-'0';
                total += k*dec;
                if(total>INT_MAX || dec>INT_MAX){
                    if(sign==1)
                        return INT_MIN;
                    else
                        return INT_MAX;
                }
                dec = dec*10;
                j--;
            }
            else if((str[j]>=97 && str[j]<=122) || str[i]=='-' || str[i]=='+' || !isalnum(str[j])){
                total = 0;
                dec=1;
                j--;
            }
            else
                j--;
        }
        
        if(sign ==1)
            total = total - 2*total;
        return total;
        
        /*testcases:
        3.1925, +b2516489289,+-1,+   00012,1-0,12a567,  0000000000012345678,2000000000000000,2147483646,*/
    }
};
