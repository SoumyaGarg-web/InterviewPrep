#SUBMISSION 1: O(mlogn)

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m=matrix.size();
        
        if(m==0)
            return false;
        
        int n=matrix[0].size();
        
        for(int i=0;i<m;i++){
            int low = 0;
            int high = n-1;
            
            while(low<=high){
                int mid = (low+high)/2;
                if(matrix[i][mid]==target)
                    return true;                  
                else if(matrix[i][mid]>target)
                    high=mid-1;
                else
                    low=mid+1;
            }
        }
        return false;
    }
};

#SUBMISSION 2: O(m+n)

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m = matrix.size();
        
        if(m==0)
            return false;
        
        int n = matrix[0].size();
        int i=m-1;
        int j=0;
        while(i>=0 && j<n){
            if(matrix[i][j]==target)
                return true;
            else if(matrix[i][j]<target)
                j += 1;
            else
                i -= 1;
        }
        return false;
    }
};
