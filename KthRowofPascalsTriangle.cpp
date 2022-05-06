vector<int> Solution::getRow(int A){
    int numRows = A;
    vector<int> temp; 
    temp.push_back(1);
    vector<int> newRow;
    if(numRows == 0){
        return temp;
    }
    for (int i = 0; i < numRows; i++) {   
        newRow.clear();    
        newRow.push_back(1);
        for (int j = 0; j < temp.size() -1; j++) {
            newRow.push_back(temp[j] + temp[j + 1]);
        }
        newRow.push_back(1);
        temp = newRow;
    }
    return newRow;
}
