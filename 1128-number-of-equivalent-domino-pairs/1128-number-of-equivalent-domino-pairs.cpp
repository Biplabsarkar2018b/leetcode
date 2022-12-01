#include<bits/stdc++.h>
class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        map<pair<int,int>,int> m;
        int ans = 0;
        for(int i=0;i<dominoes.size();i++){
            pair<int,int> pair1;
            int f = min(dominoes[i][0],dominoes[i][1]);
            int s = max(dominoes[i][0],dominoes[i][1]);
            pair1.first = f;
            pair1.second = s;
            if(m[pair1]){
                ans+=m[pair1];
                m[pair1]++;
            }else{
                m[pair1]++;
            }
        }
        return ans;
    }
};