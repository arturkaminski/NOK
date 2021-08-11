#include<iostream>

class Stack{
    private:
        int SP;
        int stackstore[100];
    public:
        Stack(){
            SP =0;
        };
        void push(int);
        int pop();

};
void Stack::push(int value){
    stackstore[SP++] = value;
}

int Stack::pop(){
    int result =  stackstore[--SP];
    return result;
}

class AddingStack : Stack{
    private:
        int sum;
    public:
        void push(int value);
        int pop();
};
void AddingStack::push(int value){
    sum += value;
    Stack::push(value);
}
int AddingStack::pop(){
    int val = Stack::pop();
    sum -= val;
    return val;
}


int main(){

    Stack little, another, funny;
    little.push(1);
    std::cout << little.pop << '\n';
}
