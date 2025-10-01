class MinStack {
public:
    vector<int>stk, mins;
    int i, j;
    MinStack() {
        i = -1, j = -1;
        stk = vector<int>(3 * 1e4 + 5, 0);
        mins = vector<int>(3 * 1e4 + 5, 0);
    }

    void push(int val) {
        i++, j++;
        stk[i] = val;
        if (j - 1 >= 0 && mins[j - 1] < val)
            mins[j] = mins[j - 1];
        else mins[j] = val;
    }

    void pop() {
        i--, j--;
    }

    int top() {
        return stk[i];
    }

    int getMin() {
        return mins[j];
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */