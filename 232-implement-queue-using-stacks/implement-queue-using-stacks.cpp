class MyQueue {
public:
    stack<int> rev;

    MyQueue() {}

    void push(int x) {
        stack<int> temp;

        while (!rev.empty()) {
            temp.push(rev.top());
            rev.pop();
        }

        rev.push(x);

        while (!temp.empty()) {
            rev.push(temp.top());
            temp.pop();
        }
    }

    int pop() {
        int ans = rev.top();
        rev.pop();
        return ans;
    }

    int peek() {
        return rev.top();
    }

    bool empty() {
        return rev.empty();
    }
};