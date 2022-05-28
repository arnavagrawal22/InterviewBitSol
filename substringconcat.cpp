vector<int> Solution::findSubstring(string A, const vector<string> &B) {
    int lenL = B.size();
    int lenW = B[0].size();
    map<string,int> mp;
    for(int i = 0 ; i < lenL ; i ++){
        mp[B[i]]++;
    }
    vector<int> ans;
    int len = lenL*lenW;
    if(A.length()<len){
        return ans;
    }
    for(int i = 0 ; i <= (A.length()-len); i ++){
        map<string,int>temp = mp;
        int j = i;
        while(j < i + len){
            string t = A.substr(j,lenW);
            if(temp[t] > 0){
                temp[t]--;
                j = j + lenW;
            }
            else{
                break;
            }
        }
        if(j == i + len){
            ans.push_back(i);
        }
    }
    return ans;
}
