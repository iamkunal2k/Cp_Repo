#include <bits/stdc++.h>
using namespace std;

class Myqueue {
    
    public:
    stack<int> input, output;
    
    //initialize your data structure
    Myqueue() {
        
    }
    
    void push(int data) {
        cout<<"The element is pushed : "<<data<<endl;
        input.push(data);
    }
    
    int pop () {
        
        //shift all the elements from input to output
        if(output.empty()) {
            while(input.size()) {
                output.push(input.top()), input.pop();
            }
        }
        
        int data = output.top();
        output.pop();
        return data;
    }
    
    int top () {
         //shift all the elements from input to output
        if(output.empty()) {
            while(input.size()) {
                output.push(input.top()), input.pop();
            }
        }
        return output.top();
        
    }
    
    int size() {
        return (output.size() + input.size());
    }
};

int main() {
  Myqueue q;
  q.push(3);
  q.push(4);
  cout << "The element poped is " << q.pop() << endl;
  q.push(5);
  cout << "The top of the queue is " << q.top() << endl;
  cout << "The size of the queue is " << q.size() << endl;

}