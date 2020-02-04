class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        
        map<char,int>m;
        
    char rowA[10] = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
    char rowB[9] = {'a','s','d','f','g','h','j','k','l'};
    char rowC[7] = {'z','x','c','v','b','n','m'};
        
        int i;
        for(i=0;i<10;i++){
            m[rowA[i]]=1;
            //cout<<rowA[i];
        }
        for(i=0;i<9;i++){
            m[rowB[i]]=2;
        }
         for(i=0;i<7;i++){
            m[rowC[i]]=3;
         }
        int flag=0,j;
        vector<string>v;
        for(i=0;i<words.size();i++){
            int k = m[tolower(words[i][0])];
            for(j=0;j<words[i].size();j++){
                if(m[tolower(words[i][j])]==k)
                    flag = 1;
                else{
                    flag=0;
                    break;
                }
            }
            if(flag==1)
                v.push_back(words[i]);
        }
        
        return v;
        
    }
};
