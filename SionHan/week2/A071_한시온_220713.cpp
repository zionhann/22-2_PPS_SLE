/**
 * @author zionhann
 * @date 2022-07-13
 * @title 232. Implement Queue using Stacks
 * @from https://leetcode.com/problems/implement-queue-using-stacks/
 * @elapsed_time 45+min
 */

class MyQueue {
    stack<int> in;
    stack<int> out;
public:
    MyQueue() {}
    
    void push(int x) {
        in.push(x);
    }
    
    int pop() {
        if (out.empty()) {
            fill();
        }
        int val = out.top();
        out.pop();
        return val;
    }
    
    int peek() {
        if (out.empty()) {
            fill();
        }
        return out.top();
    }
    
    bool empty() {
        return in.empty() && out.empty();
    }
private:
    void fill() {
         while (!in.empty()) {
            out.push(in.top());
            in.pop();
         }
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */