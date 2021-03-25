#include <iostream>
#include <vector>
#include "queue.h"

Queue::Queue(){
    std::vector<int> arr1;
}
Queue::~Queue(){
    arr1.clear();
}

void Queue::print(){
    for(auto e : arr1){
        std::cout << e << " ";
    }
    std::cout << "\n";
}

bool Queue::isEmpty(){
    return arr1.empty();
}

void Queue::enqueue(int x){
    arr1.emplace(arr1.begin(), x);
}

int Queue::dequeue(){
    int e = arr1.back();
    arr1.pop_back();
    return e;
}

int Queue::front(){
    return arr1.back();
}

int main(){
    Queue arr1;
    std::cout << arr1.isEmpty() << std::endl;
    arr1.enqueue(5);
    arr1.enqueue(6);
    arr1.print();
    std::cout << arr1.front() << std::endl;
    arr1.dequeue();
    std::cout << arr1.front() << std::endl; 
    
    return 0;
}