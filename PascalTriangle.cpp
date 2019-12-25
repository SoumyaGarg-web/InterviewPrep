class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>k(numRows);      
        int i,j;
        for(i=0;i<numRows;i++)
        {
            k[i]=vector<int>(i+1);
            for(j=0;j<i+1;j++){
                if(j==0 || i==j)
                    k[i][j]=1;
                else
                    k[i][j]=k[i-1][j-1]+k[i-1][j];
            }
        }
        return k;
    }
};
