#include <iostream>
#include <vector>

class Stack{
    private:
        std::vector<int> arr1;

    public:
        Stack();
        ~Stack();
        bool push(int);
        int pop();
        int top();
        bool isEmpty();
        void print();
};

Stack::Stack(){
    std::vector<int> arr1;
}

Stack::~Stack(){
    arr1.clear();
}

void Stack::print(){
    for(auto a : arr1){
        std::cout << a << " ";
    }
    std::cout << "\n";
}

bool Stack::push(int a){
    arr1.emplace(arr1.begin(), a);
    return true;
}

int Stack::pop(){
    int a = arr1[0];
    arr1.erase(arr1.begin());
    return a;
}

int Stack::top(){
    return arr1.front();
}

bool Stack::isEmpty(){
    return arr1.empty();
}


int main(){
    Stack arr1;
    std::cout << arr1.isEmpty() << "\n";
    arr1.push(1);
    arr1.push(2);
    arr1.print();
    return 0;
}