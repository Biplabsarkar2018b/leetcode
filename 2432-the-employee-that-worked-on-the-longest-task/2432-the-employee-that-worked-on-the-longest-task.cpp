class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        pair<int,int> maxi;
        maxi = {logs[0][1],logs[0][0]};
        for(int i=1;i<logs.size();i++){
            int diff = logs[i][1] - logs[i-1][1];
            if(diff>maxi.first){
                maxi = {diff,logs[i][0]};
            }else if(diff==maxi.first){
                int currID = logs[i][0];
                int lastID = maxi.second;
                if(currID>lastID) maxi = {diff,lastID};
                else maxi = {diff,currID};
            }
        }
        
        return maxi.second;
    }
};