string Solution::solve(string A) {
    queue<char> q;
    vector<int> count(26,0);
    string ans = "";
    for(char c:A){
        q.push(c);
        count[c-'a']++;
        while(!q.empty() && count[q.front() - 'a'] > 1){
            q.pop();
        }
        if(!q.empty()){
            ans += q.front();
        }
        else{
            ans += "#";
        }
    }
    return ans;
}
