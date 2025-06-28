# define n 10000
class MinStack {
int* arr;
int tops;
public:
    MinStack() {
        arr = new int [n];
        tops=-1;
    }
    
    void push(int val) {
        if(tops==n-1){
            cout<<"StackOverflow";
        }
        tops++;
        arr[tops]=val;
    }
    
    void pop() {
        if(tops==-1){
            cout<<"stack underflow"<<endl;
        }
        tops--;
    }
    
    int top() {
        if(tops==-1){
            cout<<"stack underflow"<<endl;
        }
        return arr[tops];
    }
    
    int getMin() {
        int minvalue=INT_MAX;
        int i=0;
        while(i<=tops){
            if(minvalue>arr[i]){
                minvalue=arr[i];
                i++;
            }
            else{
                i++;
            }
        }
        return minvalue;
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