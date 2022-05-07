int Solution::solve(string A, int B) {
    string days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int firstSunday;
    int day = 0;
    for(int i = 0; i < 7 ; i++){
        if(days[i] == A){
        day = i+1;
        break;
        }
    }
    firstSunday = (7-day)+1;
    int count = B/7;
    int left = B%7;
    if(firstSunday<=left){
        count ++;
    }
    return count;
}
