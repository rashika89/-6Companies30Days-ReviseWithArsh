class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& p) {
        vector<int>adj[n];
        for(int i=0;i<p.size();i++){
            // int a=p[i][0],b=p[i][1];
            adj[p[i][1]].push_back(p[i][0]);
        }
        vector<int>in(n,0);
        for(int i=0;i<n;i++){
            for(int j:adj[i]){
                in[j]++;
            }
        }
        int c=0;
        queue<int>q;
        for(int i=0;i<n;i++){
            if(in[i]==0)
            q.push(i);
        }
        while(!q.empty()){
            int a=q.front();
            q.pop();
            c++;
            for(int i:adj[a]){
                in[i]--;
                if(in[i]==0)
                q.push(i);
            }
        }
        return c==n;
    
      
    }
};
