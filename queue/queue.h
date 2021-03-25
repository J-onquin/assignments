#pragma once
#include <vector>

class Queue{
    private:
        std::vector<int> arr1;

    public:
        Queue();
        ~Queue();
        bool isEmpty();
        void enqueue(int);
        int dequeue();
        int front();
        void print();
};