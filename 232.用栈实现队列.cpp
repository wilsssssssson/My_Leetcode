/*
 * @lc app=leetcode.cn id=232 lang=cpp
 *
 * [232] 用栈实现队列
 */

// @lc code=start
#include<stack>
using namespace std;
class MyQueue {
public:
    MyQueue() {//构造函

    }
    stack<int> b;//队列
    stack<int> a;//辅助操作栈
    void push(int x) {
        while(!b.empty()){//将b中的全部放入a中
            int temp=b.top();
            b.pop();
            a.push(temp);
        }
        a.push(x);
        while(!a.empty()){
            int temp=a.top();
            a.pop();
            b.push(temp);
        }


    }
    
    int pop() {
        
        int out=0;
        if(!b.empty()){
            out=b.top();
            b.pop();
        }
        return out;

    }
    
    int peek() {
        
        int out=0;
        if(!b.empty()){
            out=b.top();
            
        }
        return out;

    }
    
    bool empty() {
        if(b.empty()){
            return 1;
        }else{
            return 0;
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
// @lc code=end

