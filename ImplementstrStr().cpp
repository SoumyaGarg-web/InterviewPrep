#SUBMISSION 1:

class Solution {
public:
    int strStr(string haystack, string needle) {
        int k = haystack.find(needle); 
        if (k != haystack.size()+1) 
            return k;
        else
            return -1;
        
    }
};

#SUBMISSION 2:

class Solution {
public:
    int strStr(string haystack, string needle) {
      size_t k = haystack.find(needle); 
      if (k != string::npos) 
          return k;
      else
          return -1;
    }
};
