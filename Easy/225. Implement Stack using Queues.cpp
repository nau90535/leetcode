class MyStack {
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }
        Top = q1.front();
        q1.pop();
        q1.swap(q2);
        return Top;

    }
    
    int top() {
        return q1.back();
    }
    
    bool empty() {
        return q1.empty();
    }
private:
    queue<int> q1, q2;
    int Top;
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
