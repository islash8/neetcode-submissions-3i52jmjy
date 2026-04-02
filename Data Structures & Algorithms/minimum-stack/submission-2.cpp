class MinStack {
public:
       vector<int> stack_; 
       vector<int> minStack_;
    
    void push(int val) {

        if(stack_.empty() || val <= minStack_.back())
        {
            minStack_.push_back(val);
        } 
        stack_.push_back(val);
    }
    
    void pop() {
       if(stack_.back() == minStack_.back())
       {
        minStack_.pop_back();
       } 
       stack_.pop_back();
    }
    
    int top() {
       return stack_.back(); 
    }
    
    int getMin() {
       return minStack_.back(); 
    }
};
