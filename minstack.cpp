stack<int> st;
stack<int> minSt;

MinStack::MinStack() {
    st = stack<int>();
    minSt = stack<int>();
}

void MinStack::push(int x) {
    st.push(x);
    if(minSt.empty()){
        minSt.push(x);
    }
    else{
        if(x < minSt.top()){
            minSt.push(x);
        }
        else{
            minSt.push(minSt.top());
        }
    }
}

void MinStack::pop() {
    if(st.size() != 0){
        st.pop();
        minSt.pop();
    }
}

int MinStack::top() {
    if(st.size() == 0){
        return -1;
    }
    return st.top();
}

int MinStack::getMin() {
    if(minSt.size() == 0){
        return -1;
    }
    return minSt.top();
}

