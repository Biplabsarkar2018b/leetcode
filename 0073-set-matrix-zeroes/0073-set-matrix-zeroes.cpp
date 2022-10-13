class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<pair<int,int>> s;
        
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    //setting the rows to zeros
                    for(int h=0;h<matrix[i].size();h++){
                        if(s.count({i,h})) continue;
                        s.insert({i,h});
                    }
                    //setting the columns to zeros
                    for(int k=0;k<matrix.size();k++){
                        if(s.count({k,j})) continue;
                        s.insert({k,j});
                    }
                }
            }
        }
        
        for(auto it:s){
            matrix[it.first][it.second] = 0;
        }
    }
};